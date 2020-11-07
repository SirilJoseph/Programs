//Program to find (m+n)*(x-y)
#include<stdio.h>
int main()
{
	int m,n,x,y,sum;
printf("Enter the numbers for m,n,x and y:");
scanf("%d%d%d%d", &m,&n,&x,&y);
sum=(m+n)*(x-y);
printf("Result = %d", sum);
}
