#include <stdio.h>
int main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int i,j;
  void arr(int a[3][3]);
  for (i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      printf("%d ",a[i][j]);
      if(j==2)
        printf("\n" );
    }
  }
  printf("\n" );
  arr(a);
  for (i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      printf("%d ",a[i][j] );
      if(j==2)
        printf("\n" );
    }
  }

  return 0;
}

void arr(int a[3][3]){
  void swap(int,int);
  int c;
  int i,j;
  for (i=0;i<=2;i++){
    for(j=i;j<=2;j++){
      printf("here\n" );
      swap(a[i][j],a[j][i]);
    }
  }
}

void swap(int a ,int b)
{
  int c;
  c=a;
  a=b;
  b=c;
}
