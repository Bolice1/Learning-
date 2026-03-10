#include <stdio.h>

struct Car
{
    /* data */
    int nbrOfTyres, nbrofDoors, nbrofWindows, sits;
    char color[20], plateNumber[10];
} Benz, Toyota, Fuso, Ferrari;

int BenzValues()
{
    printf("1.Benz\n______________________\n");
    printf("Enter Color: ");
    scanf("%s", Benz.color);
    printf("Enter Number of Tyres: ");
    scanf("%d", &Benz.nbrOfTyres);
    printf("Enter Sits: ");
    scanf("%d", &Benz.sits);
    return 0;
}

int ToyotaValues()
{

    printf("\n2.Toyota\n_______________________\n");
    printf("Enter Color: ");
    scanf("%s", Toyota.color);
    printf("Enter Number of Doors: ");
    scanf("%d", &Toyota.nbrofDoors);
    printf("Enter Plate Number: ");
    scanf("%s", Toyota.plateNumber);
    return 0;
}

int FusoValues()
{
    printf("1.Fuso\n______________________\n");
    printf("Enter Color: ");
    scanf("%s", Fuso.color);
    printf("Enter Number of Tyres: ");
    scanf("%d", &Fuso.nbrOfTyres);
    printf("Enter Sits: ");
    scanf("%d", &Fuso.sits);
    return 0;
}
int FerrariValues()
{
    printf("1.Ferrari\n______________________\n");
    printf("Enter Color: ");
    scanf("%s", Ferrari.color);
    printf("Enter Number of Tyres: ");
    scanf("%d", &Ferrari.nbrOfTyres);
    printf("Enter Sits: ");
    scanf("%d", &Ferrari.sits);
    return 0;
}
int main()
{
    BenzValues();
    ToyotaValues();
    FusoValues();
    FerrariValues();

    printf("\n--- Summary ---\n");
    printf("Benz: %s, Tyres: %d\n", Benz.color, Benz.nbrOfTyres);
    printf("Toyota: %s, Doors: %d\n", Toyota.color, Toyota.nbrofDoors);
    printf("Fuso: %s, Tyres: %d\n", Fuso.color, Fuso.nbrOfTyres);
    printf("Ferrari: %s, Tyres: %d\n", Ferrari.color, Ferrari.nbrOfTyres);

    return 0;
}
