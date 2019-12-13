

//Dirshe Salat


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
//array to keep book names as strings
char **booknames=(char**)malloc(10*sizeof(char*));
int i;
for(i=0;i<10;i++)
booknames[i]=(char*)malloc(100*sizeof(char));
//array to keep the prices of book names
char * s = (char*)malloc(sizeof(char)*101);
char c;
float *prices=(float*)malloc(10*sizeof(float*));
for(i=0;i<10;i++){
printf("Enter a book name: ");
float price;
scanf("%[^\n]%*c",s);
strcpy(booknames[i], s);
printf("Enter a book price: ");
scanf("%f",&price);
scanf("%c",&c);
prices[i]=price;
}
printf("\nBook Inventory:\n");
float sum;
for(i = 0; i < 10; i++){
printf("Book Name And Price : %10s:$%.2f\n", booknames[i],prices[i]);   
sum += prices[i];
}
printf("The Inventory Total Is: $%.2f",sum);
return 0;
}

