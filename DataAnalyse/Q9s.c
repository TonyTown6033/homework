//多项式的q9s算法
#include <stdio.h>
int main()
{
  float a[100];
  int n,i;
  printf("please input the max power of the polynomial\n" );
  scanf("%d",&n);
  printf("please input the num of x^n (in order power max to min )\n" );
  for (i=0;i<=n;i++){
    scanf("%f",a+i);
  }
  printf("num input complete\n" );
  printf("---------------------------------------------\n" );

  float p,x;
  printf("please input the value of the x\n" );
  scanf("%f",&x);
  p=a[0];
  for (i=1;i<=n;i++){
    p=x*(x*p+a[i]);
  }
  printf("the value of the polynomial is %f\n",p );
  return 0;

}
