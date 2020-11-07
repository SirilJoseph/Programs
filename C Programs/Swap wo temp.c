#include <stdio.h>
int main() 
{
    double fn, sn;
    printf("Enter first number: ");
    scanf("%lf", &fn);
    printf("Enter second number: ");
    scanf("%lf", &sn);
    // Swapping
    //fn=(initial_fn-initial_sn)
    fn=fn-sn;   
    //sn=(initial_fn-initial_sn)+initial_sn=initial_fn
    sn=fn+sn;
    //fn=initial_fn-(initial_fn-initial_sn)=initial_sn
    fn=sn-fn;
    printf("After swapping, first number = %.2lf\n", fn);
    printf("After swapping, second number = %.2lf", sn);
    return 0;
}
