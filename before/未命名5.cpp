#include <stdio.h>
#include <math.h>
int main ()
{
  float dis(float,int);
  float x,m;
  int n;
  printf("please input the x and n\n" );
  scanf("%lf %d",&x,&n );
  m=dis(x,n);
  printf("the answer is %f\n",m );
  return 0;
}
float dis(float x,int n){
  if (n==1)
    return x;
  x=tan(x);
  x=dis(x,n-1);
  printf("here\n" );
}
