#include<stdio.h>
/*Author- Elizabeth Muthoni
  Registration number-CT101/G/22818/24
  Date - 2024/09/27*/


//program to calculate simple interest
int main(){
  int principal_amount;
  int time;
  float rate_values;
  int Simple_interest;
  
  //calculting simple interest
  Simple_interest = (principal_amount * time * rate_values)/100;


  //printing the principal amount
  printf("Enter the principal_amount:\n ");
  scanf("%d", &principal_amount);


//printing the time
  printf("Enter the time:\n ");
  scanf("%d", &time);

  
  //printing the rate per annum
  printf("Enter the rate per annum:\n ");
  scanf("%f", &rate_values);

  
  // Output the result
  printf("The Simple Interest is %d", Simple_interest);

  
  return 0;
}
