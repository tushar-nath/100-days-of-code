#include <stdio.h>

int main()
{
    int numb;
    float a,b,c,d;
    printf("enter the choice:\n1.killometer to miles\n2.inches to foot\n3.cms to inches\n4.inches to meters ");
    scanf("%d", &numb);
    switch (numb)
    {
    case 1: printf("Enter the length in kilometer:");
    scanf("%f", &a);
    printf("The required value in miles is : %f",a*0.621371);
        break;
    
    case 2: printf("Enter the length in inches:");
    scanf("%f", &b);
    printf("The required value in foot is : %f",b*0.083333);
        break;

        case 3: printf("Enter the length in centimeter:");
    scanf("%f", &c);
    printf("The required value in inches is : %f",c*0.393701);
        break;

        case 4: printf("Enter the length in inches:");
    scanf("%f", &d);
    printf("The required value in meter is : %f",d*0.0254);
        break;
        
    default:printf("please enter a valid input");
        break;
    }
    return 0;

}
/*

kms to miles 
inches to foot
cms to inches
inches to meters

*/