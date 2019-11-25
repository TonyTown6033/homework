#include <stdio.h>
int main()
{
  int a[4],n=4;
  int i,m;
  void fun(int arr[],int n);
  printf("please input the num\n" );
  scanf("%d",&m );
  a[0]=m/1000;
  a[1]=m/100-a[0]*10;
  a[2]=m/10-a[0]*100-a[1]*10;
  a[3]=m%10;
  fun(a,n);
  return 0;
}

void fun (int arr[],int n){
  int i;
  for (i=0;i<=n-2;i++){
    printf("%d ",arr[i]);
  }
  printf("%d\n",arr[n-1] );
  return;
}
