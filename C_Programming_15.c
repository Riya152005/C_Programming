#include<stdio.h>
int main()
{
	int num,a,b,c,d;
	printf("Enter the number:");
	scanf("%d",&num);
	a=num%100;
	b=num/100;
	c=a%10;
	d=a/10;
	printf("Reversed 2 digit:%d",(b*100)+(c*10)+d);
}
