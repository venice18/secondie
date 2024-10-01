/*Author- Elizabeth Muthoni
  Reg No- CT101/G/22818/24
  Date - 2024/09/27*/

#include<stdio.h>

//conditional statements(if...else...elseif)
//creating variables
int age;
int annual_income;

//inputting the prompts
printf("Enter age: ");
scanf("%d", &age);

printf("Enter the annual_income: ");
scanf("%d", &annual_income);

//using if...else,else..if to obtain expected output
if(age >= 21, annual_income >= 21000){
  printf("Congratulations you qualify for a loan");
}else{
  printf("Unfortunately, we are unable to offer you a loan at this time");
}