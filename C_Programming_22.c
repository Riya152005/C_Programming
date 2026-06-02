#include<stdio.h>
int main()
{
	int num,x,y;
	printf("Enter the number:");
	scanf("%d",&num);
	y=num/10;
	x=num-5*(y%2);
	printf("Ten's odd subtraction:%d",x);
}
