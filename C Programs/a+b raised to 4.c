#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter two numbers \n");
	scanf("%d %d", &a,&b);
	sum=(a+b)*(a+b)*(a+b)*(a+b);
	printf("Sum = %d ", sum);
	return 0;
}
