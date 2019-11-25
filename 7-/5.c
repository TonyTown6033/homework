#include <stdio.h>
#include <string.h>

int main()
{
  void godv(char str[]);
  char a[20];
  printf("input the char less than 20 letter\n" );
  gets(a);
  godv(a);
  puts(a);

  return 0;
}

void godv(char str[])
{
  char b[20];
  int i=0,u=0;
  while (str[i]!='\0')
    {u++; i++;}
    u--;
    printf("%d\n",u );
  for(i=u;i>=0;i--)
    b[u-i]=str[i];
  puts(b);
  for(i=0;i<=u;i++)
    str[i]=b[i];

}
