#include<stdio.h>
int main()
{
	int num,x,y,reverse;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num%10;
	y=num/10;
	reverse=(x*10)+y;
	printf("Reverse of number:%d",reverse);
}
