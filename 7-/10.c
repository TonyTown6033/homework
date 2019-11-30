#include <stdio.h>
#include <string.h>
int main()
{
  char str[20];
  int i=0,j=0;
  int length=0,u=0;

  printf("please input the string\n" );
  gets(str);

  while (i<=strlen(str)) {
      j++;
    if(str[i]==' '){
      if(length<=j){
        length=j;
        u=i-j;
        j=0;
      }
      i++;
    }
  }

  while (str[u]!=' ') {
    /* code */
    printf("%c",str[u] );
    u++;
    }

  return 0;

}
