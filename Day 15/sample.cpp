#include <iostream>

using namespace std;

void gifts()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n, greater<int>());


    int x[k+1], y[k], count=1;

    for(int i=0; i<(n-1); i++)
    {
        if(count%2==0 && count==(n-2))
        {
            x[i]=arr[i];
            x[i+1]=arr[i+1];
        }
        else if(count%2==0)
        {
            x[i]=arr[i];
            count++;
        }
        else if(count%2!=0)
        {
            y[i]=arr[i];
            count++;
        }
    }

    for (int i=0; i<k+1; i++)
    {
        cout<<x[i]<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        gifts();
    }
    return 0;
}