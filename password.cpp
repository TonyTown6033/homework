#include <stdio.h>
#include <string.h>
#define n 26
int main()
{
    char s1[10];
    char s2[10];
    int i,j;
    int m;

    gets(s1);

    for (i=0;i<=9;i++){
      j=(int)s1[i]-64;
      m=(int)s1[i]+j-(n-j+1);
      s2[i]=(char)m;
    }
      puts(s2);
	return 0;

}
