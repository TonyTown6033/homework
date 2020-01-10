#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  int num;
  char filename[10],b='0';
  printf("please input the filename\n" );
  scanf("%s",filename);
  if((fp=fopen(filename,"w"))==NULL){
    printf("can not open this file\n" );
    exit (0);
  }

  printf("please input the num you want to input use 1114 to end input\n" );

  scanf("%d",&num);

  while (num!=1114){
    fprintf(fp,"%d",num);
    printf("%d \n",num);
    scanf("%d",&num);
  }
  fclose(fp);
  return 0;
}
