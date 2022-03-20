#include<stdio.h>
#include<math.h>

float input()
{
  float n;
  printf("enter the number you want to find a square root of:");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n){
  float result,temp;
  result=sqrt(n);
  return result;
}
void output(float n,float sqrt_result){
  printf("the square root of %f is %f\n",n,sqrt_result);
}
int main(){
  int n,sqrtresult;
  n=input();
  sqrtresult=my_sqrt(n);
  output(n,sqrtresult);
  return 0;
}