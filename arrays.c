//C arrays - 1Dimension arrays
#include<stdio.h>

int main(){
  int i;
  //Declaring an array called marks
  int marks[5] = {10,20,30,40,50};
  printf("Element at index 0 is %d \n", marks[0]);
  printf("Element at index 1 is %d \n", marks[1]);
  printf("Element at index 2 is %d \n", marks[2]);

  //using the for loop method
  for(i=0;1<5;i++){
    printf("Marks[%d] = %d \n",i, marks[i]);
  }
  return 0; 
}