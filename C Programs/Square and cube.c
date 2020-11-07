#include<stdio.h>
int main()
{
 int n,s,c;
 printf("\n Enter A Number: ");
 scanf("%d",&n);
 s=n*n;  //Square=number*number
 c=s*n;  //Cube=Square*number
 printf("\n Square of %d is = %d",n,s);
 printf("\n\n Cube of %d is = %d",n,c);
 getch(); 
 return 0;
}
