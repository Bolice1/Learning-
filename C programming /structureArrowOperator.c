#include<stdio.h>
struct Car{
    int nbrOfTyres, nbrOfDoors, nbrOfSits;
    char color[20], plateNbr[10];
    float price;
};
struct Car Toyota, Benz;
struct Car *ptrCar=NULL;
void readInputs();
  void  outputData();
void readInputs(){
    printf("INPUT PROPERTIES VALUES\n");
    printf("1. TOYOTA\n___________\n");
    ptrCar=&Toyota;
    printf("\n Nbr of Tyres: ");
    scanf("%d",&ptrCar->nbrOfTyres);
    printf("\n Nbr of Doors: ");
    scanf("%d",&ptrCar->nbrOfDoors);
    printf("\n Nbr of Sits: ");
    scanf("%d",&ptrCar->nbrOfSits);
    printf("\n Price: ");
    scanf("%f",&ptrCar->price);
    printf("\n Color: ");
    scanf("%s",&ptrCar->color);
    printf("\n Plate Nbr: ");
    scanf("%s",&ptrCar->plateNbr);
    ptrCar=&Benz;
    printf("\n Nbr of Tyres: ");
    scanf("%d",&ptrCar->nbrOfTyres);
    printf("\n Nbr of Doors: ");
    scanf("%d",&ptrCar->nbrOfDoors);
    printf("\n Nbr of Sits: ");
    scanf("%d",&ptrCar->nbrOfSits);
    printf("\n Price: ");
    scanf("%f",&ptrCar->price);
    printf("\n Color: ");
    scanf("%s",ptrCar->color);
    printf("\n Plate Nbr: ");
    scanf("%s",ptrCar->plateNbr);
}
void outputData(){
    printf("OUTPUT PROPERTIES VALUES\n");
    printf("1. TOYOTA\n___________\n");
    ptrCar=&Toyota;
    printf("\n Nbr of Tyres: %d \n",ptrCar->nbrOfTyres);
    printf("\n Nbr of Doors: %d\n", ptrCar->nbrOfDoors);
    printf("\n Nbr of Sits: %d\n",ptrCar->nbrOfSits);
    printf("\n Price: %f \n",ptrCar->price);
    printf("\n Color: %s \n", ptrCar->color);
    printf("\n Plate Nbr: %s \n",ptrCar->plateNbr);

    ptrCar=&Benz;
    printf("\n Nbr of Tyres: %d \n",ptrCar->nbrOfTyres);
    printf("\n Nbr of Doors: %d\n", ptrCar->nbrOfDoors);
    printf("\n Nbr of Sits: %d\n",ptrCar->nbrOfSits);
    printf("\n Price: %f \n",ptrCar->price);
    printf("\n Color: %s \n", ptrCar->color);
    printf("\n Plate Nbr: %s \n",ptrCar->plateNbr);

}
int main(){
    readInputs();
    outputData();
    printf("\n SIZE OF ANY CAR: %d", sizeof(Toyota));
    return 0;
}
