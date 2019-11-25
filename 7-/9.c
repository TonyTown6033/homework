#include <stdio.h>
#include <string.h>
int main()
{
  void func (char arr[]);
  extern int l,n,b,o;
  char str[20];
  printf("please input the string \n" );
  gets(str);
  func(str);

  printf("the letter of string is %d\nthe num of string is %d\nthe block of string is %d\n the other char of string is %d\n",l,n,b,o );
  return 0;
}
  int l=0,n=0,b=0,o=0;
void func (char arr[]){
  extern int l,n,b,o;
  int i=0;
  int t=0;
  while (arr[i]!='\0'){
    if(arr[i]==' ')
      b++;
    if(arr[i]>=48 && arr[i]<=57)
      n++;
    if(arr[i]>=65 && arr[i]<=90)
      l++;
    if(arr[i]>=97 && arr[i]<=122)
      l++;
      i++;
  }
  o=strlen(arr)-b-n-l;
  return ;
}
