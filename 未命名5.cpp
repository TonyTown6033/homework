#include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  int tr=1,i=0,j=0;
  int length=0,u=0;

  printf("please input the string\n" );
  gets(str);

  while (i<=strlen(str)) {
    if(tr==1)
      j++;
    if(str[i]=='\0'){
      tr=0;
      if(length<=j){
        length=j;
        u=i-j;
        j=0;
      }
      i++;
    }
  }

  while (str[u]!='\0') {
    /* code */
    printf("%c",str[u] );
    u++;
    }

  return 0;

}
