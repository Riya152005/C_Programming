#include<stdio.h>
int main()
{
	int num,x;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num-5*(num%2);
	printf("odd subtraction:%d",x);
}
