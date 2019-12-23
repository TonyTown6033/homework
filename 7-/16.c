#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
  int transform(char a[20],int n);
  char str[20];
  int s,n;
  printf("please input the num(16) and the length\n" );
  gets(str);
  scanf("%d",&n);
  s=transform(str,n);
  printf("the num(10) is %d\n",s );
  return 0;
}

int transform(char a[20],int n){
  int i,num,u;
  num=0;
  // l=strlen(a[20]);
  for(i=0;i<n;i++){
    if(n-i-1==0)
      u=(a[i]-55);
    else u=(a[i]-55)*16^(n-i-1);                  //A ASCII ==65
    num+=u;
    printf("%d %d\n",a[i]-55,num );
  }
  printf("here\n" );
  return num;
}
