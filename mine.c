#include<stdio.h>
#include<math.h>

int main(){
  int principal_balance;
  float interest_rate;
  char n;
  int time;
  float final_amount;
  //print principal_balance
  printf("Enter the principal_balance:\n ");
  scanf("%d", &principal_balance);

  //print interest rate
  printf("Enter the interest_rate:\n ");
  scanf("%d", &time);

  //print n
  printf("Enter the n:\n ");
  scanf("%c", &n);

  //print time
  printf("Enter the time:\n ");
  scanf("%d", &time);

  /*calculating compound interest
  compound interest formula = A = P*pow((1+r/n),(n*t))
  where A = final amount,P = principal_balance,r = interest rate,
  n = number of times interest applied per time period,
  t = number of times */
  final_amount = principal_balance * pow((1 + interest_rate/n),(n*time));

  //output the result
  printf("The Final amount is: %f\n", final_amount);
  printf("The Compound Interest is: %f", final_amount - principal_balance);

  return 0;
}