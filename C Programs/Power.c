#include <math.h>
#include <stdio.h>
int main() 
{
    double b,e,powered;
    printf("Enter a base number: ");
    scanf("%lf", &b);
    printf("Enter an exponent: ");
    scanf("%lf", &e);
    powered = pow(b, e);
    printf("%.1lf^%.1lf = %.2lf", b,e,powered);
    return 0;
}
