#include<stdio.h>
int main()
{
	int x,ones;
	printf("Enter the number:");
	scanf("%d",&x);
	ones=x%10;
	printf("One's digit:%d",ones);
}
