#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *in,*out;
  char ch,inname[10],outname[10];
  printf("please input the inname\n" );
  scanf("%s",inname);
  printf("pleas input the outname\n" );
  scanf("%s",outname);

  if ((in=fopen(inname,"r"))==NULL)
    {
      printf("can not open this file \n" );
      exit(0);
    }

  if ((out=fopen(outname,"w"))==NULL)
    {
      printf("can not open this file\n");
      exit (0);
    }

  while (!feof(in)){
    ch=fgetc(in);
    fputc(ch,out);
    putchar(ch);
  }

  fclose(in);
  fclose(out);
  return 0;

}
