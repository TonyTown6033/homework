#include <stdio.h>
int main()
{
  float ave(int a[][],int n);
  int arr[10][5];       //10个学生 5门课
  int i,j;

  printf("please input the students' mark\n" );
  for (j=0;j<=4;j++){
    for(i=0;i<=9;i++){
      scanf("%d",&arr[i][j]);
    }
    printf("please input the next students' mark \n" );
  }

  printf("the input program is finished\n");

  //计算每个学生的平均分

  int avestu[10];
  for(i=0;i<=9;i++){
    avestu[i]=ave(arr[0][i],5);
  }

  //计算每门课的平均分
  int avesub[5];
  for(i=0;i<=4;i++){
    avrsub[i]=ave(arr[i][0],10);
  }
}

float ave(int a[][],int n){
  int i;
  float s=0.0;
  for (i=0;i<n;i++){
    s+=a[j];
  }
  s=s/n;
  return s;
}
