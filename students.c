/*Author- Elizabeth Muthoni
  Reg No- CT101/G/22818/24
  Date - 2024/10/24*/
#include <stdio.h>
#include <string.h>

struct students{
    char name [30];
    char email [25];
    char reg_no [20];
    int phone_no;
    int ID_no;
    int marks;
    float height;
} students1;
int main(){
    //assigning values to variables
    strcpy(students1.name,"Liz");
    students1.marks = 45;
    students1.phone_no = 757565214;
    students1.ID_no = 123456789;
    strcpy(students1.reg_no, "CT101/G/22818/24");
    strcpy(students1.email, "ndirituliz@gmail.com");
    students1.height = 5.4;
    
    //print the structure variables
    printf("Name: %s \n", students1.name);
    printf("Marks: %d \n", students1.marks);
    printf("Phone number: %d \n", students1.phone_no);
    printf("ID_no: %d \n", students1.ID_no);
    printf("Registration Number: %s \n", students1.reg_no);
    printf("Email: %s \n", students1.email);
    printf("Height: %.2f \n",students1.height);
    
    
    
     
    
    return 0;
}