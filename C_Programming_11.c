#include<stdio.h>
int main()
{
	int num,x,y;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num/10;
	y=num%10;
	printf("Sum of digits:%d",x+y);
}
