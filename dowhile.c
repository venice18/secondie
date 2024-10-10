/*Author - Elizabeth Muthoni
  Reg No - CT101/G/22818/24
  Date - 4/10/24*/
#include<stdio.h>
int main(){
  int i=50, sum=0;//when to start
  do{
   printf("%d \n",i);
    i++;//when to step
    sum +=i;
  }while(i<=50);//when to stop

  //while reversing
  do{
    printf("%d \n",i);
    i--;
    sum +=i;
  }while(i>=1);

  //while squaring
  do{
    printf("%d \n",i*i);
    i++;
    sum +=i*i;
  }while(i<=50);
  printf("The sum is %d",sum);

  return 0;
}