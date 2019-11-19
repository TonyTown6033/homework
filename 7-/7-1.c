#include <stdio.h>
#include "packages.c"
void main()
{
  int gcd(int ,int );
  int lcm(int ,int );
  int x,y;
  int a,b;
  printf("please input the x and y \n" );
  scanf("%d %d",&x,&y);
  a=gcd(x,y);
  b=lcm(x,y);
  printf("the greatest common divisor is %d\n",a );
  printf("the least common multiple is %d\n",b );

}

int gcd(int a,int b)         //greatest common divisor
{
    extern void maxandswap(int,int);
    int c=0;
    printf("%d\n",b);
    if(a%2==0 && b%2==0){
      a=a/2;
      b=b/2;
    }
    maxandswap(a,b);
    if (a/b==2 && a%b==0)
      c=b;
    else  gcd(b,a-b);
    return b;
}

int lcm(int a,int b)          //least common multiple
{
  int i;
  int m,n;
  m=1,n=1;
  for (i=1;m!=0 && n!=0;i++){
      m=i%a;
      n=i%b;
      printf("here2\nm=%d n=%d\n",m,n);
  }
  return i;
}
