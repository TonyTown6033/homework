#include <stdio.h>
int main()
{
  float ave(int a[],int n);
  int max1(int a[],int n);
  int max2(int a[],int n);
  float fangcha(int a[]);
  int arr[10][5];       //10个学生 5门课
  int i,k;

  printf("please input the students' mark\n" );
  for (k=0;k<=4;k++){
    for(i=0;i<=9;i++){
      scanf("%d",&arr[i][k]);
    }
    printf("please input the next students' mark \n" );
  }

  printf("the input program is finished\n");

  //计算每个学生的平均分

  int avestu[10];
  int subdata[5];
  for (k=0;k<=9;k++){
    for(i=0;i<=4;i++){
      subdata[k]=arr[i][k];
      avestu[k]=ave(subdata,5);
    }
  }
  //计算每门课的平均分
  int avesub[5];
  int studata[10];
  for(i=0;i<=4;i++){
    for(k=0;k<=9;k++){
    studata[i]=arr[i][k];
    avesub[i]=ave(studata,10);
    }
  }
  //avestu是各个学生的平均分
  //avesub是各门课程的平均分

  //找出所有分数中最高的分数所对应的课程和学生
  int sub,stu;
  int maxsubdata[5],maxstudata[5];
  for(i=0;i<=4;i++){
    for(k=0;k<=9;k++){
    subdata[i]=arr[i][k];
    maxsubdata[i]=max1(subdata,10);
    maxstudata[i]=max2(subdata,10);
    }
  }
  //maxsubdata 里存着各门课的最好成绩
  //maxsubdata 存着最好各门课的最好成绩的学生编号
  sub=max2(maxsubdata,5);
  stu=max2(maxstudata,5);

  float sigema=fangcha(avestu);

  for (i=0;i<=4;i++)
    printf("%d\n",avesub[i] );
  for (i=0;i<=0;i++)
    printf("%d\n",avestu[i] );
  printf("the highest subject order is %d\n",sub );
  printf("the highest score 's owner 's number is %d\n",stu );

  printf("the sigema of this test is %f\n",sigema );

}

float ave(int a[],int n){
  int i;
  float s=0.0;
  for (i=0;i<n;i++){
    s+=a[i];
  }
  s=s/n;
  return s;
}

int max1(int a[],int n){
  int i;
  int m,p;
  m=a[0]; p=0;
  for (i=1;i<n;i++){
    if (a[i]>=a[i-1]){
      m=a[i]; p=i;
    }
  }
  return m;
}

int max2(int a[],int n){
  int i;
  int m,p;
  m=a[0]; p=0;
  for (i=1;i<n;i++){
    if (a[i]>=a[i-1]){
      m=a[i]; p=i;
    }
  }
  return p;
}

float fangcha(int a[10]){
  int i,n=10;
  float atom=a[i]*a[i]/n-(a[i]/n)*(a[i]/n);
  float sigema=0;
  for (i=0;i<=9;i++){
    sigema+=atom;
  }
  return sigema;

}
