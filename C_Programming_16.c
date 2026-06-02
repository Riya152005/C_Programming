#include<stdio.h>
int main()
{
	int num,x,y,z,a;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num%100;
	y=num/1000;
	z=num%1000;
	a=z/100;
	printf("Result:%d",(a*1000)+(y*100)+x);
}
