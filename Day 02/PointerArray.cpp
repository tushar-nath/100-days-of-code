#include <iostream>

using namespace std;

int main()
{
    // arrays can also be used as pointers
    int arr[]={10,20,30};

    int *ptr=arr;
    for (int i=0; i<3; i++)
    {
        cout<<*(arr+i)<<endl; // since arr++ is illegal 
    }
    
    // Pointer to pointer problem
    int a=10;
    int *p;
    p=&a;

    cout<<*p<<endl; // output : 10

    int **q=&p;

    cout<<*q<<endl; // output : address of a
    cout<<**q<<endl; // output : 10

    return 0;
    
}