#include<stdio.h>
int main()
{
	int x,ones,one_s;
	printf("Enter the number:");
	scanf("%d",&x);
	ones=x%100;
	one_s=ones%10;
	printf("One's digit:%d",one_s);
}
