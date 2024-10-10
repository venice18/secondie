/*Author - Elizabeth Muthoni
  Reg No - CT101/G/22818/24
  Date - 10/10/24*/
#include<stdio.h>

int main(){
  //declaring variables
  int customer_id;
  char customer_name;
  int units_consumed;
  float charges_per_unit, total_bill;

  //prompting user
  printf("Enter the CustomerID:\n");
  scanf("%d", &customer_id);

  printf("Enter the CustomerName:\n");
  scanf("%c", &customer_name);

  printf("Enter the UnitConsumed:\n");
  scanf("%d", &units_consumed);

  //calculating the charges per unit using if..else statements
  if(units_consumed <= 199){
    charges_per_unit = 1.20;
  }else if (units_consumed >= 200 && units_consumed < 400){
    charges_per_unit = 1.50;
  }else if (units_consumed >= 400 && units_consumed < 600){
    charges_per_unit = 1.80;
  }else{
    charges_per_unit = 2.00;
  }

  //calculating the total bill
  total_bill = units_consumed * charges_per_unit;

  //showing how a surcharge will be charged
  if(total_bill > 400){
    total_bill = total_bill + total_bill*0.15;
  }
  
  //making sure that the minimum bill is Kshs.100/-
  if(total_bill < 100){
    total_bill = 100;
  }

  //displaying the final ouputs
  printf("CustomerID : %d\n", customer_id);
  printf("CustomerName : %c\n", customer_name);
  printf("Units Consumed : %d\n", units_consumed);
  printf("Charges per Unit : %f\n", charges_per_unit);
  printf("Total amount to pay : %f",total_bill);
}
