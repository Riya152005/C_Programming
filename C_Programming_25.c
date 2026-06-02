#include <stdio.h>
int main()
{
    int num, sum,unit;
	printf("enter the number:");
    scanf("%d", &num);
    sum = (num / 100) + (num / 10) % 10 + (num % 10);
    unit = (sum / 10) + (sum % 10);
    printf("%d",unit);
    return 0;
}
