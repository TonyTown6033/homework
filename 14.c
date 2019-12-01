#include <stdio.h>
int main()
{

}

float ave(int a,int n){
  int i;
  float s=0.0;
  for (i=0;i<=n;i++){
    s+=a[i];
  }
  s=s/n;
  return s;
}
