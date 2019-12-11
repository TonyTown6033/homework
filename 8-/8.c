#include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  char *p=str;
  int i;
  int ch=0,num=0,block=0,other=0;
  printf("please input the string\n" );
  gets(p);

  for(i=0;*(p+i)!='\0';i++){
    if(*(p+i)<=90 && *(p+i)>=65)
      {ch++;}
    if(*(p+i)<=122 && *(p+i)>=97)
      {ch++;}
    if(*(p+i)<=57 && *(p+i)>=48)
      {num++;}
    if(*(p+i)==' ')
      {block++;}
  }
    other=i-ch-num-block;
  printf("the character's number is %d\nthe num's number is %d\nthe block's number is %d\nthe other's number is %d\n",ch,num,block,other );
  return 0;


}
