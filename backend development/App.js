import express from 'express';
import swaggerJsdoc from 'swagger-jsdoc';
import swaggerUi from 'swagger-ui-express';

// let use a simple array to store temporariy these books 

const books = [];

// let us setup the express app 

const app = express();

// set up of the swagger options 

const swaggerOptions = {
    definition: {
        swagger: "2.0",
        info: {
            title: "Library APIs",
            version: "1.0.0",
        }

    },
    apis: ['App.js'],
}

const swaggerDocs = swaggerJsdoc(swaggerOptions)
console.log(swaggerDocs)

// swagger comments 
/**
 * @swagger
 * /books:
 *   get:
 *     description: get all the books 
 *     responses:
 *        200: 
 *          description: success
 * 
 */

app.use("/api-docs", swaggerUi.serve, swaggerUi.setup(swaggerDocs))


// let us try to handle simple crud requests 



app.get("/books", (req, res) => {
    res.status(200).send({ msg: "Welcome to the books store" })
})
// getting books according to their id 

// create a single book 

app.post("/books", (req, res) => {

    const { bookID, bookTitle, bookAuthor } = req.body;

    // let us check whether the book exists or not 

    const exists = books.find(b => b.id = bookID)

    if (exists) { res.status(400).send({ error: "The book already exists" }) }
    else {
        const book = {
            id: bookID,
            title: bookTitle,
            author: bookAuthor
        };
        // add the created book to the array list 


        books.push(book)
    }





})
// let us set up the port on which our program will run on 

const PORT = process.env.PORT || 9783;

app.listen(PORT, () => {
    (error) => {
        if (error) {
            console.log(`${error.error}`)
        }
    }
    console.log(`Our program is runnig on the port: ${PORT}`)
})
