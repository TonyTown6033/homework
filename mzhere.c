#include <stdio.h>

extern const int p_num;
extern const int a_num;
extern ave1[p_num];
int main ()
{
  void input(int,int);
  input (p_num,a_num);
  float score[p_num][a_num];
  void ave(int b[][a_num]);
  ave(score[p_num][a_num]);
  void arrange(float a[p_num]);

  arrange(ave1);

}

void input(int a,int b){
  printf("please input the number of the player and judge,use block to divide them\n" );
  scanf("%d %d",&a,&b );
  printf("input complete\n" );
  const int p_num=a;
  const int a_num=b;
}
//尽量保留原始数据
void ave(int b[p_num][a_num]){
  int i,j;
  int temp;
  float ave1[p_num],temp2=0.0;
  for(i=0;i<p_num;i++){
    for(j=1;j<a_num;j++){
      if(b[i][j]<=b[i][j-1])
        {temp=b[i][j-1];b[i][j-1]=b[i][j];b[i][j]=temp;}
    }
  }
  for(i=0;i<p_num;i++){
    for(j=1;j<a_num-1;j++){
      temp2+=b[i][j];
    }
    temp2=temp2/(a_num-2);
    ave1[i]=temp2;
    temp2=0.0;
  }
}

void arrange(float a[p_num]){
  float c[p_num][2];
  int i,temp;
  for (i=0;i<p_num;i++)
    {c[i][0]=a[i];c[i][1]=i;}
  for(i=1;i<p_num;i++){
    if(c[i][0]>=c[i-1][0])
    {c[i][0]=temp;c[i][0]=c[i-1][0];c[i-1][0]=temp;
     c[i][1]=temp;c[i][1]=c[i][0];c[i][0]=temp;}
   }
  printf("Ranking         number          ave score\n");
  for (i=0;i<p_num;i++)
    printf(" %d         %d          %f\n",i+1,c[i][1],c[i][0] );
}
