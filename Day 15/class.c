
#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float sum;
    float per;
    printf("Enter marks of 5 subs: ");
    scanf(" %d %d %d %d %d", &s1,&s2,&s3,&s4,&s5);
    sum= s1+s2+s3+s4+s5;
    per= (sum/500)*100;
    printf("\nTotal marks = %0.2f ", sum);
    printf("\nPercentage = %0.2f \n\n", per);
    return 0;
}