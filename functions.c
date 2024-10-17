#include<stdio.h>
#include<math.h>
int sum(int x, int y, int z); //function prototype
int multiplication(int a, int b); //function prototype

int main(){
  int x,y,z,a,b,c;
  printf("Enter 3 values: ");
  scanf("%d%d%d", &a,&b,&c);
  x = sum(a,b,c);//function calling
  y = multiplication(a,c);//function calling
  z = sum(100,200,300);//function calling
  
  printf("The sum is %d \n", x);
  printf("The multiplication is %d \n", y);
  printf("The sum id %d \n", z);

  return 0;

}
//function definition
int sum(int x, int y, int z){
  int result;
  result = x + y + z;
  return result;

}
//function definition
int multiplication(int a, int b){
  int result;
  result = a * b;
  return result;
}