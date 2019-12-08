#include <stdio.h>
#include <math.h>
/*int main ()
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
  printf("here %f\n",x );
}
*/
int main()
{
  double x=3.1415926/4,m=1555;
  int i;
  printf("here\n" );
  for (i=1;fabs(m-x)>=0.001;i++){
    printf("here\n" );
    x=tan(x);
    m=tan(x);
    printf("%lf %lf\n",x,m );
  }
  printf("here\n" );
  return 0;
}
