#include <stdio.h>
#include <string.h>
int main(){
  void sel(char a[],char b[]);
  char str1[20];
  char str2[20];
  printf("please input the char \n" );
  gets(str1);
  sel(str1,str2);
  puts(str2);

  return 0;

}

void sel (char a[],char b[])
{
   int i=0,u=0;
   // m=strlen(a); n=strlen(b);
   while (a[i] != '\0'){
     if (a[i]=='a'||a[i]=='A' ){
     b[u]=a[i];
     u++;
    }
    if(a[i]=='e' || a[i]=='E'){
     b[u]=a[i];
     u++;
    }
    if(a[i]=='i' || a[i]=='I'){
     b[u]=a[i];
     u++;
    }if(a[i]=='o' || a[i]=='O'){
     b[u]=a[i];
     u++;
    }if(a[i]=='u' || a[i]=='U' ){
     b[u]=a[i];
     u++;
    }
   i++;}
}
