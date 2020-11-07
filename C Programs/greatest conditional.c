#include<stdio.h>

int main()
{
	int fn,sn;
	printf("Enter the first number :");
	scanf("%d", &fn);
	printf("Enter the second number :");
	scanf("%d", &sn);
	(fn>sn)?(printf("First number is greater than Second number")):(printf("Second number is greater than First number"));
    return 0;
}
