#include <stdio.h>
void main()
{
  int i;
  char s1[10];
  char s2[10];
  char u;
  int m;

  gets(s1);
  gets(s2);

  u=0;
  m=0;
  /*for(i=0;s1[i] != '\0' ;i++)
    u=u+s1[i];

  for(i=0;s2[i] != '\0';i++)
    m=m+s2[i];*/

    for(i=0;i<=9;i++){
      u=s1[i]-s2[i];
      m=m+(int)u;
      if(s1[i]=='\0' && s2[i]=='\0')
      break;

    }

    // u=(int)u;

    // printf("u=%d m=%d\n",u,m );
    printf("%d\n",m );
}
