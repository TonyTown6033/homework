//将一个5x5矩阵的最大元素放在中央，四个角放最小的四个，顺序左右上下，用函数实现
#include <stdio.h>
int main()
{
  void change (int a[][5]);
  int a[5][5]={{11,12,13,14,15},{1,2,3,4,5},{6,7,8,9,10},{16,17,18,19,20},{21,22,23,24,25}};
  int (*p)[5]=a;
  int i,j;

  change(p);

  for (i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%d ",a[i][j] );
    }
    printf("\n");
  }

  return 0;
}

void change  (int a[5][5]){
  int * search(int u,int a[][5]);
  int * max1(int a[][5]);
  int min1(int a[][5],int);
  int b[5][5];
  int (*p)[5]=b;
  int *max,*min[4];
  int i,j;

  for(i=0;i<5;i++){
    for (j=0;j<5;j++)
      b[i][j]=a[i][j];
  }

  max=max1(a);
  // printf("max is %d\n",*max );
  for(i=0;i<4;i++)
    {min[i]=search(min1(p,i),a);}
      // printf("min is %d\n",*min[i] );}

  int temp;

  temp=a[2][2]; a[2][2]=(*max); (*max)=temp;
  temp=a[0][0]; a[0][0]=*min[0]; *min[0]=temp;
  temp=a[0][4]; a[0][4]=*min[1]; *min[1]=temp;
  temp=a[4][0]; a[4][0]=*min[2]; *min[2]=temp;
  temp=a[4][4]; a[4][4]=*min[3]; *min[3]=temp;
}

int * max1(int a[][5]){
  int *p;
  int i,j;
  for (i=0;i<5;i++){
    for (j=1;j<5;j++){
      if (a[i][j]>a[i][j-1])
        p=&a[i][j];
    }
  }
  return p;
}

int min1(int a[][5],int u){

  int (*p)[5]=a;
  int i,j;
  int temp;
  for (i=1;i<25;i++){
    for(j=1;j<25;j++)                 //可能存在过剩计算
      if (*(*p+j)<*(*p+j-1))
        {temp=*(*p+j); *(*p+j)=*(*p+j-1); *(*p+j-1)=temp ;}
  }
  // printf("%d %d %d %d \n",*(*p+0),*(*p+1),*(*p+2),*(*p+3) );
  return *(*p+u);
}

int * search(int u ,int a[][5]){
  int i,j;
  int *p;
  for (i=0;i<5;i++){
    for (j=0;j<5;j++){
      if (u==a[i][j]){
        p=&a[i][j];
        break;}
    }
  }
  return p;
}
