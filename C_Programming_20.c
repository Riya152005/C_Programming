#include<stdio.h>
int main()
{
	int num,x,y;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num/100;
	y=num%10;
	printf("Output:%d",(x*100)+y);
}
