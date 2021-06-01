#include<stdio.h>
//Conversion of units

float len1(float x)
{
    x*=0.6214;
    return x;
}

float len2(float x)
{
    x*=0.0833;
    return x;
}

float len3(float x)
{
    x*=0.394;
    return x;
}

float len4(float x)
{
    x*=0.0254;
    return x;
}

float wt(float x)
{
    x*=0.4536;
    return x;
}

int main()
{
    int a;
    float convert;
    printf("\nThe following conversions are available :- ");
    printf("\n(1) Kilometre to Miles ");
    printf("\n(2) Inches to Feet ");
    printf("\n(3) Centimetre to Inches ");
    printf("\n(4) Inches to Metre ");
    printf("\n(5) Pound to Kilograms ");

   do
   {
       printf("\n\nEnter your choice between 1-5 to use the conversions or 0 to quit : ");
       scanf("%d", &a);
       if(a==0)
            printf("\n\nThanks! Visit again!");
       else
        {
            switch(a)
            {
                case 1:
                    {
                        printf("\nEnter the value in kilometre: ");
                        scanf("%f", &convert);
                        printf("\n%0.2f km is equal to %0.2f miles. ", convert, len1(convert));
                        break;
                    }
                case 2:
                    {
                        printf("\nEnter the value in inches: ");
                        scanf("%f", &convert);
                        printf("\n%0.2f inch(s) is equal to %0.2f feet. ", convert, len2(convert));
                        break;
                    }
                case 3:
                    {
                        printf("\nEnter the value in centimetre: ");
                        scanf("%f", &convert);
                        printf("\n%0.2f cm is equal to %0.2f inches. ", convert, len3(convert));
                        break;
                    }
                case 4:
                    {
                        printf("\nEnter the value in inches: ");
                        scanf("%f", &convert);
                        printf("\n%0.2f inch(s) is equal to %0.2f metre. ", convert, len4(convert));
                        break;
                    }
                case 5:
                    {
                        printf("\nEnter the value in pounds: ");
                        scanf("%f", &convert);
                        printf("\n%0.2f pound(s) is equal to %0.2f kg. ", convert, wt(convert));
                        break;
                    }
                default:
                    printf("\nInvalid Input! Please try again. ");

            }
        }

   }while(a>0);

   return 0;

}