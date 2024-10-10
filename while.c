/*Author - Elizabetn Muthoni
  Reg No - CT101/G/22818/24
  Date - 4/10/2024*/

#include<stdio.h>
int main(){
  int i=0, sum=0;
  while(i<=50){
    printf("%d \n",i);
    i++;
    sum = sum + i;
    sum +=i;
  }
  // //reverse form while calculating sum
  while(i>=1){
    printf("%d \n",i);
    i--;
    sum = sum + i;
    sum +=i;
  }
  //while squaring
  while(i<=50){
    printf("%d \n", i*i);
    i++;
    sum = sum + i*i;
    sum +=i*i;
  }

  printf("The sum is %d", sum);
  return 0;
}
//printing in reverse, printing the square, printing the sum togehter with its square
