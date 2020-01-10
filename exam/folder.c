#include<stdio.h>
#include <stdlib.h>
int main()
{
  FILE* fp;
  char ch,filename[10];
  printf("please input the file name\n");
  scanf("%s",filename);
  if ((fp=fopen(filename,"w"))==NULL)
    {
      printf("can not open this file \n");
      exit(0);
    }
  ch=getchar();
  printf("please input a letter you wanna input into the disk use # to end input\n");
  ch=getchar();
  while (ch!='#'){
    fputc(ch,fp);
    putchar(ch);
    ch = getchar();
  }
  fclose(fp);
  putchar(10);
  return 0;
}
