#include <stdio.h>
#include <stdlib.h>
int main()
{
  void bubblesort(int a[10]);
  void Selectionsort(int a[10]);
  void Insertionsort(int a[10]);

  FILE *fp;
  int i;
  int a[10];
  char filename[10];
  printf("please input data filename\n" );
  scanf("%s",filename );

  if((fp=fopen(filename,"r"))==NULL)
    {
      printf("can not open this file\n" );
      exit(0);
    }

  for(i=0;i<10;i++){
    fscanf(fp,"%d",&a[i]);
  }
  fclose(fp);

  printf("a is :\n" );
  for(i=0;i<10;i++){
    printf("a%d=%d ",i,a[i] );
    if(i==4) putchar(10);
  }
  putchar(10);
  printf("then start sort\n" );
  bubblesort(a);
  // SelectionSort(a);
  // InsertionSort(a);
  for(i=0;i<10;i++) {
    printf("a%d=%d ",i,a[i] );
    if(i==4) putchar(10);
  }
  return 0;
}

void bubblesort(int a[10]){
  int i=0,j=0;
  int temp=0;
  for (i=0;i<10-1;i++){
    for(j=0;j<10-i-1;j++){
      if (a[j+1]<=a[j])
        {temp=a[j+1];a[j+1]=a[j];a[j]=temp;}
        }
  }
}

void SelectionSort(int a[10]){
  int i=0,j=0,p;
  int temp=0;
  for(i=0;i<10-1;i++){
    p=i;
    for(j=i;j<10-1;j++){
      if(a[j]<a[p])
        p=j;
    }
    temp=a[i];a[i]=a[p];a[p]=temp;
  }
}

void InsertionSort(int a[10]){
  int i,j;
  int temp;
  for  (i=1;i<10;i++){
    for(j=i;j<10;j++){
      while(a[j]<a[j-1]&&j>=0)
      {temp=a[j];a[j]=a[j-1];a[j-1]=temp;j--;}
    }
  }
}
