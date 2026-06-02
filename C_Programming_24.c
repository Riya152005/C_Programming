#include<stdio.h>
int main()
{
	int num,x,y,z,output;
	printf("Enter the number:");
	scanf("%d",&num);
    x=num/100;
    y=num%10;
    printf("Result:%d",num-(5*(x%2)*(y%2)));
}
