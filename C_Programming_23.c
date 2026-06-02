#include<stdio.h>
int main()
{
	int num,x,y,z,output;
	printf("Enter the number:");
	scanf("%d",&num);
	y=num/10;
	z=num%10;
	x=y+z;
	output=num-5*(x%2);
	printf("Result:%d",output);
}
