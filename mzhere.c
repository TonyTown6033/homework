#include <stdio.h>
int main ()
{
  void input(void);
  input ();
  void ave();
  ave();
  void arrange(void);
  void judge(void);
  judge();
  arrange();

}
// float score[p_num][a_num];
// extern float score[p_num][a_num];
int p_num,a_num;
void input(void){
  printf("please input the number of the player and judge,use block to divide them\n" );
  scanf("%d %d",&p_num,&a_num );
  printf("input complete\n" );
}

float score[100][100];
void judge(){
  int i,j;
  for(i=0;i<p_num;i++){
    for(j=0;j<a_num;j++){
      printf("let %d judgement judge for %d player\n",j,i );
      scanf("%f",&score[i][j]);
      printf("data input successfully\n" );
      }
  }
}
//尽量保留原始数据
// extern float score[p_num][a_num];
float ave1[100];
void ave(){
  int i,j;
  float temp;
  float temp2=0.0;
  for(i=0;i<p_num;i++){
    for(j=1;j<a_num;j++){
      if(score[i][j]<=score[i][j-1])
        {temp=score[i][j-1];score[i][j-1]=score[i][j];score[i][j]=temp;}
    }
  }
  for(i=0;i<p_num;i++){
    for(j=1;j<a_num-1;j++){
      temp2+=score[i][j];
    }
    temp2=temp2/(a_num-2);
    ave1[i]=temp2;
    temp2=0.0;
  }
}
// extern float ave1[p_num];
void arrange(void){
  float c[p_num][2];
  int i,temp;
  for (i=0;i<p_num;i++)
    {c[i][0]=ave1[i];c[i][1]=i;}
  for(i=1;i<p_num;i++){
    if(c[i][0]>=c[i-1][0])
    {c[i][0]=temp;c[i][0]=c[i-1][0];c[i-1][0]=temp;
     c[i][1]=temp;c[i][1]=c[i][0];c[i][0]=temp;}
   }
  printf("Ranking         number          ave score\n");
  for (i=0;i<p_num;i++)
    printf(" %d         %d          %f\n",i+1,c[i][1],c[i][0] );
}
