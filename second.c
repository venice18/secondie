/*Author: Elizabeth Muthoni
  Reg No: CT101/G/22818/24
  Date: 2024/10/01 */

#include<stdio.h>
int main(){
  //creating the variables
  int Book_ID;
  int Due_Date;
  int Return_Date;
  int Days_Overdue;
  int fineRate;
  int fineAmount;


  //Input the prompts
  printf("Enter the Book_ID: ");
  scanf("%d", &Book_ID);

  printf("\nEnter the Due_Date: ");
  scanf("%d", &Due_Date);

  printf("\nEnter the Return_Date: ");
  scanf("%d", &Return_Date);

  //calculating the days overdue
  Days_Overdue = Return_Date - Due_Date;
  
  //using an if...else statement to determine the fine rate
  if(Days_Overdue <= 7){
    fineRate = 20;
  }else if(Days_Overdue <=14){
    fineRate = 50;
  }else{
    fineRate = 100;
  }
  //calculating the fine amount
  fineAmount = fineRate * Days_Overdue;

  //Displaying the program
  printf("\nBook ID: %d", Book_ID);
  printf("\nDue Date: %d", Due_Date);
  printf("\nReturn Date: %d", Return_Date);
  printf("\nDays Overdue: %d", Days_Overdue);
  printf("\nFine Rate: %d", fineRate);
  printf("\nFine Amount: %d", fineAmount);

  return 0;
}  
