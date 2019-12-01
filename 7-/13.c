#include <stdio.h>
int main()
{
  int p(int x, int n);
  int x;
  int n;
  float y;
  printf("please input the x,n\n");
  scanf("%d %d",&x,&n );
  y=p(x,n);
  printf("the P(%d,%d) is %lf\n",x,n,y );
  return 0;
}

int p(int x,int n){
  int m;
  if (n==0)
    return 1;
  if (n==1)
    return x;
  if (n>=1){
    m=(2*n-1)*x-p(x,n-1)-(n-1)*p(x,n-2)/n;
  }
  return m;
}
