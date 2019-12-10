//strlen 的实现
#include <stdio.h>
int main ()
{
  int length(char a[]);
  char str[20];
  char *p=str;
  int n;

  printf("please input the string\n" );
  scanf("%s",str );

  n=length(p);
  printf("the length of string is %d\n",n );
  return 0;
}

int length (char a[]){
  int i;
  for(i=0;a[i]!='\0';i++){}
    // printf("%c\n",a[i] );
  return i;
}
