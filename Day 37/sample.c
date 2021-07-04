#include<stdio.h>
//Fibonacci Series using Recursive Function and by using Iterative approach
//Iterative approach is much faster than recursive function in case of Fibonacci series for big numbers.

int fibonacci_recursive(int x)
{
    if (x==1 || x==2)
        return x-1;
    else
        return (fibonacci_recursive(x-1) + fibonacci_recursive(x-2));
}
int fibonacci_iterative(int x)
{
    int a=0,b=1;
    for(int i=0; i<x-1; i++)
    {
        b=a+b;     // 1 for iteration 1
        a= b-a;     // 1 for iteration 1
    }
    return a;
}


int main()
{
   int num;
   printf("\nEnter the index to get Fibonacci Series : ");
   scanf("%d", &num);
   printf("\n\nThe value of Fibonacci number at position no %d using iterative approach is  %d. ", num, fibonacci_iterative(num));
   printf("\nThe value of Fibonacci number at position no %d using recursive function is  %d. \n\n", num, fibonacci_recursive(num));
   return 0;
}