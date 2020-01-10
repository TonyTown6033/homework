#include <stdio.h>
#include <stdlib.h>
int main()
{
  char print(void)
  void save(char ch);



}
void save(char ch){
  FILE *fp;
  printf("save program has started\n" );
  if((fp=fopen(data,"w"))==NULL)
  {
    printf("can not open this file\n" );
    exit(0);
  }
  //文件末处输入
  fprintf(fp,"%s",ch);
  

}
