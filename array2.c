//C arrays - 2Dimension arrays
#include<stdio.h>

int main(){
  //Declaring an array called marks
  int i,j;
  int marks[2][3] = { {40,50,60}, {70,20,78} };
  
  //using the for loop method
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("Marks[%d][%d] = %d \n",i,j, marks[i][j]);
    }
    
  }
  return 0; 
}