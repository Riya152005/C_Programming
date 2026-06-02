#include<stdio.h>
int main()
{
	int num,x,y,z;
	printf("Enter the number:");
	scanf("%d",&num);
	x=num/100;
	y=(num/10)%10;
	z=num%10;
	printf("Sum of digits:%d",(z*100)+(y*10)+x);
	
}
