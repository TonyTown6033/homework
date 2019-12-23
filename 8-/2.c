//输入3个字符串，按照从小到大输出
#include <stdio.h>
#include <string.h>
int main ()
{
  char str1[20],str2[20],str3[20];
  char *p1=str1,*p2=str2,*p3=str3,*temp;

  // p1=str1;
  // p2=str2;
  // p3=str3;

  printf("please input the string\n" );
  gets(str1);
  gets(str2);
  gets(str3);

  if(strcmp(str1,str2)>=0)
    {temp=p1; p1=p2; p2=temp;}
  if (strcmp(str1,str3)>=0)
    {temp=p1;p1=p3;p3=temp;}
  if (strcmp(str2,str3)>=0)
    {temp=p2;p2=p3;p3=temp;}

  printf("HERE\n" );
  puts(p1);
  puts(p2);
  puts(p3);
  return 0;




}
