#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a[n];
    for (int i=1; i<=n; i++)
    {
        cin>>arr[i];
        a[arr[i]]=i;
    }
    for (int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}