/*Author- Elizabeth Muthoni
  Reg No- CT101/G/22818/24
  Date - 2024/10/17*/
#include<stdio.h>
#include<math.h>
//functions to calculate the total bill
float calctotal_bill(int customer_id, char customer_name, int units_consumed, float charges_per_unit){
  float total_bill = units_consumed * charges_per_unit;
  return total_bill;
}

//functions to apply surcharge
float applySurcharge(float total_bill){
  if(total_bill > 400){
    float surcharge = total_bill * 0.15;
    total_bill = total_bill + surcharge;
  }
  return total_bill;
}

//function to make sure minimum bill is Kshs. 100
float minimum_bill(float total_bill){
  if (total_bill < 100){
    total_bill = 100;
  }
  return total_bill;
}

int main(){
  int customer_id;
  char customer_name;
  int units_consumed;
  float charges_per_unit,total_bill,surcharge,final_bill;

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


  //calculating total bill
  total_bill = calctotal_bill(customer_id,customer_name,units_consumed,charges_per_unit);

  //showing how surchge will be charged
  total_bill = applySurcharge(total_bill);

  //making sure minimum bill is 100
  total_bill = minimum_bill(total_bill);

  //displaying the final ouputs
  printf("CustomerID : %d\n", customer_id);
  printf("CustomerName : %c\n", customer_name);
  printf("Units Consumed : %d\n", units_consumed);
  printf("Charges per Unit : %f\n", charges_per_unit);
  printf("Total amount to pay : %f",total_bill);

  return 0;

}
