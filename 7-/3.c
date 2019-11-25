#include <stdio.h>
int q;
int main()
{
  int n;
  extern int q;
  void judge(int);
  q=0;

  printf("please input the num\n" );
  scanf("%d",&n);

  judge(n);
  if (q==0)
    printf("the %d is not a prime num\n",n );
  if (q==1)
    printf("the %d is a prime num\n",n);

  return 0;
}

void judge(int a)
{
  extern int q;
  int i,u;
  for (i=2;i<a;i++){
    // printf("here\n" );
    u=a%i;
    if(u==0){
      q=0;
      break;
    }
    else q=1;
  }
}
