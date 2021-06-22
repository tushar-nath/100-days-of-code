#include <stdio.h>
#include <math.h>

int main()
{
    float f, c;
    int ch;
    printf("Enter the choice :\n1. Farhenheit to Celsius\n2.Celsius to Farhenheit");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1: 
            printf("\nEnter Farhenheit: ");
            scanf("%f", &f);
            printf("\nEquivalaent calsius is: ", ((f-32.0)/1.8));
            break;
        case 2:
            printf("\nEnter Celsius: ");
            scanf("%f", &c);
            printf("\nEquivalaent farhenheit is: ", ((c*1.8)+32.0));
            break;
    }
    return 0;
}