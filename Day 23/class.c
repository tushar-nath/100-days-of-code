#include <stdio.h>
#include <math.h>

int main()
{
    int p, n, ch;
    float r;
    printf("Enter the choice :\n1. Simple Interest\n2.Compound Interest");
    scanf("%d", &ch);
    printf("Enter the value of amount, number of years, and rate of interest");
    scanf("%d%d%f", &p,&n,&r);
    switch(ch)
    {
        case 1: printf("\nThe simple interest is = %f", (p*n*r)/100);
        case 2: printf("\nThe compound interest is = %f", (p*pow((1)+(r/100),n)-p));
        default: printf("\nEnter the correct choice");
        break;
    }
    return 0;
}