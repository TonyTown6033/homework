#include <stdio.h>
struct work
{
  char name[20];
  int worknum;
};

int main()
{
  struct work int a[10];
  int i,j;
  struct work temp;
  for (i=0;i<10;i++){
    printf("please input the name and worknum\n" );
    scanf("%s %d",&a[i].name,&a[i].worknum );
  }

  for(i=1;i<10;i++){
    j=i;
    for(;j<10;j++){
      if (a[j].worknum<a[j-1].worknum)
        {temp=a[j-1]; a[j-1]=a[j]; a[j]=temp;}
    }
  }

  int search(struct work int a[],int,int);
  int worktemp,k;
  printf("please input the worknum \n",);
  scanf("%d",worktemp );
  k=search(struct work int a[10],worktemp,10);
  printf("the worker you want whos name is %s\n",a[k].name );
  return 0;
}

int search(struct work int a[],int h,int n){
  int i,len=n/2;
  for (i=len;i!=0;){
    if (h<a[i].worknum)
    {len=len/2;i=len}
    if(h>a[i].worknum)
    {len=len*3/2;i=len}
    if(h==a[i].worknum)
    {h=i;break;}
  return h;
  }

}
