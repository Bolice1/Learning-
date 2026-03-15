import express from "express";
import swaggerJSDoc from "swagger-jsdoc";
import swaggerui from "swagger-ui-express";

const app = express();
app.use(express.json());

const services = [
  { id: 1, name: "Land services" },
  { id: 2, name: "Medical services" }
];

// Swagger configuration
const swaggerOptions = {
  definition: {
    swagger: "2.0",
    info: {
      title: "Services APIs",
      version: "1.0.0",
      description: "These are APIs for services providers"
    }
  },
  apis: ["./*.js"]
};

const swaggerDocs = swaggerJSDoc(swaggerOptions);

app.use("/api-doc", swaggerui.serve, swaggerui.setup(swaggerDocs));

/**
 * @swagger
 * /service:
 *   get:
 *     description: Get all services
 *     responses:
 *       200:
 *         description: Success
 *   post:
 *     description: Create a new service
 *     parameters:
 *       - in: body
 *         name: service
 *         description: Service object
 *         required: true
 *         schema:
 *           type: object
 *           properties:
 *             serviceID:
 *               type: integer
 *             serviceName:
 *               type: string
 *     responses:
 *       201:
 *         description: Created
 *       400:
 *         description: Already exists
 */

// GET all services
app.get("/service", (req, res) => {
  res.status(200).send(services);
});

// GET service by ID
app.get("/service/:id", (req, res) => {

  const id = parseInt(req.params.id);

  const service = services.find(s => s.id === id);

  if (!service) {
    return res.status(404).send({ msg: "Service not found" });
  }

  res.status(200).send(service);
});

// CREATE service
app.post("/service", (req, res) => {

  const { serviceID, serviceName } = req.body;

  const exists = services.find(s => s.id === serviceID);

  if (exists) {
    return res.status(400).send({ msg: "Already exists" });
  }

  const service = {
    id: serviceID,
    name: serviceName
  };

  services.push(service);

  res.status(201).send({
    msg: "Created",
    service
  });
});

// Server start
const PORT = process.env.PORT || 7895;

app.listen(PORT, () => {
  console.log(`Server running on ${PORT}`);
});