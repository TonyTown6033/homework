#include <stdio.h>
#include <math.h>
float x1,x2,del;
int main()
{
  void answer1(int ,int ,int );
  void answer2(int ,int ,int );
  void answer3(int ,int ,int );

  int a,b,c;
  extern float del;

  printf("please input the a,b,c\n" );
  scanf("%d %d %d",&a,&b,&c);

  del=b*b-4*a*c;
  if(del>0)
    answer1(a,b,c);
  if(del==0)
    answer2(a,b,c);
  if(del<0)
    answer3(a,b,c);

  return 0;
}

void answer1(int a,int b,int c)
{
    extern float x1,x2,del;
    x1=((-1)*b+sqrt(del))/(2*a);
    x2=((-1)*b-sqrt(del))/(2*a);
    printf("%f %f\n",x1,x2);
}

void answer2(int a,int b,int c)
{
    extern float x1,x2;
    x1=(-1)*b/(2*a);
    x2=(-1)*b/(2*a);
    printf("%f %f\n",x1,x2);
}

void answer3(int a,int b,int c)
{
    printf("there is no answer in R\n");
}
