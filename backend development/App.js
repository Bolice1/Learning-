import express from 'express';
import swaggerJsdoc from 'swagger-jsdoc';
import swaggerUi from 'swagger-ui-express';

// let us setup the express app 

const app = express();

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
