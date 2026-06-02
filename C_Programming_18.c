#include<stdio.h>
int main()
{
	int num,x,y,z;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num%10;
	y=num/10;
	z=y/y;
	printf("Ten's digit one:%d",(z*10)+x);
}
