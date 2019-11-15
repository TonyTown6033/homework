#include <stdio.h>
#include <string.h>
#define n 26
void main()
{
    char s1[20];
    char s2[20];
    int i;
    char c;
    char u,j,m;

    gets(s1);

    for (i=0;(c=s1[i]) != '\0';i++){
      u=s1[i];
      if(((int) u)<=90)
        j=u-64;
      else
        j=u-96;
      m=u+(26-i)-j;
      s2[i]=m;
      printf("%c %d %d %c\n",s1[i],u,m,m );
    }
    // for(i=1;s2[i] != '\0';i++)
    puts(s2);
}
