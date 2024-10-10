/*Author - Elizabetn Muthoni
  Reg No - CT101/G/22818/24
  Date - 4/10/2024*/

  //for loop - output 1-30
#include<stdio.h>
int main(){
  int i, sum=0;
  // // reverse form without squaring
  for(i=30;i>=1;i--){
    printf("%d \n",i);
    //calculating the sum of the outputs
    sum = sum + i;
  }
  printf("The sum is %d", sum);
  return 0;

  for(i=0;i<=30;i++){
    printf("%d \n",i);
    sum = sum + i;
  }
  // // while squaring and in reverse form
  for(i=30;i>=1;i--){
    printf("%d \n",i*i);
    sum = sum + i*i;
  }
  printf("The sum is %d", sum);
  return 0;
}