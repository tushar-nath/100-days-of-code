#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<size; i++)
    {
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
    }
    cout<<"Maximum number is : "<<maxNo<<endl;
    cout<<"Minimum number is : "<<minNo<<endl;

    return 0;
}