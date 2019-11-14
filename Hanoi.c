#include <stdio.h>
void Hanoi(int n,char one,char two,char three){
	void move(char x,char y);
	if (n==1)
		move (one,three);
	else
	{
		Hanoi(n-1,one,three,two);
		move(one,three);
		Hanoi(n-1,two,one,three);
	}
}
////
void move(char x,char y){
	printf("%c ==> %c\n",x,y);
}

int	 main(){
	int n;
	printf("please input the plate's number \n");
	scanf("%d",&n);
	printf("the step is \n");
	Hanoi(n,'A','B','C');
	return 0;
}
