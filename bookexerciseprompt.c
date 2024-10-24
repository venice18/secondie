/*Author- Elizabeth Muthoni
  Reg No- CT101/G/22818/24
  Date - 2024/10/24*/
#include <stdio.h>
#include <string.h>

struct book{
    char title [30];
    char author [30];
    char ISBN [13];
    int publication_year;
    float price;
} book1;
int main(){
    
    printf("Enter the title of the book: ");
    scanf("%s", &book1.title);
    
    printf("Enter the author of the book: ");
    scanf("%s", &book1.author);
    
    printf("Enter the ISBN: ");
    scanf("%s", &book1.ISBN);
    
    printf("Enter the publication year of the book: ");
    scanf("%d", &book1.publication_year);
    
    printf("Enter the price: ");
    scanf("%f", &book1.price);
    
    //print the structure variables
    printf("Title: %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("Publication year: %d \n", book1.publication_year);
    printf("ISBN: %s \n", book1.ISBN);
    printf("Price: %.2f \n", book1.price);
    
    
    
    
     
    
    return 0;
}