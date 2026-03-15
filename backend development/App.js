import express from 'express';
import swaggerJsdoc from 'swagger-jsdoc';
import swaggerUi from 'swagger-ui-express';


// let us setup the express app 

const app = express();

// let us try to handle simple crud requests 

app.get("/books",(req,res)=>{
res.status(200).send({msg:"Welcome to the books store"})
})
// getting books according to their id 

app.get("/books",(req,res)=>{
const bookID = req.params

// check if it exists from the db 

const exists = 
res.status(200).send({msg:"Welcome to the books store"})
})

// let us set up the port on which our program will run on 

const PORT = process.env.PORT || 9783;

app.listen(PORT,()=>{
    (error)=>{
        if (error){
            console.log(`${error.error}`)
        }
    }
    console.log(`Our program is runnig on the port: ${PORT}`)
})
