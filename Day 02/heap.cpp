#include <iostream>

using namespace std;

int main()
{
    int a=10; // stored in stack
    int *p=new int(); // allocate memory in heap
    *p=10;
    delete(p); // delete memory in heap

    p=new int[4]; // an array

    delete[]p;
    p=NULL;

    return 0;

}