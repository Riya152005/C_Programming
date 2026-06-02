#include<stdio.h>
int main()
{
	int num,x;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num/10;
	printf("One's digit 2:%d",(x*10)+2);
}
