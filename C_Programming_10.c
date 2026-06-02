#include<stdio.h>
int main()
{
	int x,ten,tens;
	printf("Enter the number:");
	scanf("%d",&x);
	ten=x%100;
	tens=ten/10;
	printf("Tens place:%d",tens);
}
