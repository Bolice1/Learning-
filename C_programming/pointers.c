#include<stdio.h>
#include<string.h>

int main(){

    char string[10];

    printf("Pass in a string: ");
    scanf("%s",string);
    printf("You passed in '%s'",string);
 int n = strlen(string)-1;

 char *ptrpointer = string;

 for(int i = 0;i<=n;i++){

    printf("\n%c\n",*(ptrpointer+i));


 }

  return 0;
}