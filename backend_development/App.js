import express from "express";
import swaggerJsdoc from "swagger-jsdoc";
import swaggerUi from "swagger-ui-express";

const app = express();

// middleware to parse JSON bodies
app.use(express.json());

// temporary books storage
const books = [];

// Swagger configuration
const swaggerOptions = {
  definition: {
    swagger: "2.0",
    info: {
      title: "Library APIs",
      version: "1.0.0",
      description: "Simple API for managing books"
    }
  },
  apis: ["App.js"]
};

const swaggerDocs = swaggerJsdoc(swaggerOptions);

// Swagger UI route
app.use("/api-docs", swaggerUi.serve, swaggerUi.setup(swaggerDocs));

/**
 * @swagger
 * /books:
 *   get:
 *     description: Get all books
 *     responses:
 *       200:
 *         description: Success
 *   post:
 *     description: Create a new book
 *     parameters:
 *       - in: body
 *         name: book
 *         description: Book object
 *         required: true
 *         schema:
 *           type: object
 *           properties:
 *             bookID:
 *               type: integer
 *             bookTitle:
 *               type: string
 *             bookAuthor:
 *               type: string
 *     responses:
 *       201:
 *         description: Book created
 *       400:
 *         description: Book already exists
 */

// GET all books
app.get("/books", (req, res) => {
  res.status(200).send(books);
});

// CREATE book
app.post("/books", (req, res) => {

  const { bookID, bookTitle, bookAuthor } = req.body;

  const exists = books.find(b => b.id === bookID);

  if (exists) {
    return res.status(400).send({
      error: "The book already exists"
    });
  }

  const book = {
    id: bookID,
    title: bookTitle,
    author: bookAuthor
  };

  books.push(book);

  res.status(201).send({
    message: "Book created successfully",
    book: book
  });

});

// GET book by ID
app.get("/books/:id", (req, res) => {

  const id = parseInt(req.params.id);

  const book = books.find(b => b.id === id);

  if (!book) {
    return res.status(404).send({
      error: "Book not found"
    });
  }

  res.status(200).send(book);

});

// Server start
const PORT = process.env.PORT || 9783;

app.listen(PORT, () => {
  console.log(`Server running on port ${PORT}`);
});