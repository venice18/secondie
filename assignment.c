#include<stdio.h>

//program to calculate simple interesty
int main(){
  int principle_amount = 2000;
  int time = 3;
  float rate_values = 2.5;
  int Simple_interest;

  //calculting simple interest
  Simple_interest = (principle_amount * time * rate_values)/100;

  // print the results
  printf("The principle_amount is %d\n", principle_amount);
  printf("The time is %d\n", time);
  printf("The rate values per annum are %.1f\n", rate_values);
  printf("The Simple Interest is %d", Simple_interest);

  return 0;
}