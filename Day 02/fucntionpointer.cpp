#include <iostream>

using namespace std;

// Calling by Value

// void increment (int a) // different variable a
// {
//     a++;
// }

// int main()
// {
//     int a=2;
//     increment (a); // we are only passing the value of a
//     cout<<a; // output : 2 (doesn't increment)

//     return 0; 
// }

// Calling by Reference

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;  // swaps the values of a and b
}

int main ()
{
    int a=2, b=4;
    int *pa=&a;  
    int *pb=&b;

    swap(*pa, *pb); // sending the address of a and b // we could also send (&a and &b) and not make pointers at all

    cout<<*pa<<" "<<*pb;

    return 0;
}