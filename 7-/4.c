#include <stdio.h>
int main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int i,j;
  void arr(int m[][3]);
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

void arr(int m[][3]){
  int b[3][3];
  int i,j;
  for (i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      b[j][i]=m[i][j];
    }
  }
  for (i=0;i<=2;i++){
    for(j=0;j<=2;j++){
      m[i][j]=b[i][j];
    }
  }
}
