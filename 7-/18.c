#include <stdio.h>
int main()
{
  int year,month,day;
  int date=0;
  int i;

  printf("please input the year month day \n" );
  scanf("%d %d %d",&year,&month,&day );

  int monthdate[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  if(year%4==0)
    monthdate[1]=29;

  for(i=0;i<month-1;i++)
    date=date+monthdate[i];

  date = date + day;

  printf("this day is the %d day of this year\n",date );
  return 0;
}
