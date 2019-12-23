#include <stdio.h>
int main()
{
  int n,m;
  printf("please input the n \n" );
  scanf("%d",&n);
  int a[n],i;
  int *p=a,*temp;
  printf("please input the num (total is %d) \n",n );
  for (i=0;i<n;i++)
    scanf("%d",p+i);


  printf("please input the m\n" );
  scanf("%d",&m );

  for (i=0;i<n-m;i++)
    {*temp=*(p+i+m); *(p+i+m)=*(p+i); *(p+i)=*temp;}

  printf("\n" );

  for (i = 0; i < n; i++) {
    printf("%d\n",*(p+i) );
  }

  return 0;
}
