//hanoi is program to solve the hanoi question
//问题背景，要将n个盘子从第一个串挪到第三个上，要求一次诺一个，大的在小的下面
//解决思路，递归。
#include <stdio.h>
int main ()
{
  void hanoi(int,char,char,char);
  int n;
  char a='A',b='B',c='C';
  printf("please input the number of the disk\n" );
  scanf("%d",&n);
  hanoi(n,a,b,c);
  return 0;
}
void hanoi(int n,char a,char b,char c){   //从a借助b挪到c
  void move(char,char);
  if (n==1){
    move (a,c);
  }
  if (n>1){
    hanoi(n-1,a,c,b);
    move (a,c);
    hanoi(n-1,b,a,c);
  }
}

void move(char a,char b){
  printf("%c ==>  %c\n",a,b );
}
