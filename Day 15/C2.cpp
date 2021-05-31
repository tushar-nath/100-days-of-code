#include <iostream>
#include <cmath>

// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for (int i=0; i<t; i++)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        if(a==c && b==d)
        {
            break;
        }
        int count;
        count=(abs(a-c)+abs(b-d));
        if (count==0)
        {
            break;
        }
        else if (count==k)
        {
            arr[i]=1;
        }
        else if (count%2==0 && k%2==0)
        {
            arr[i]=1;
        }
        else if (count%2!=0 && k%2!=0)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }

    for (int i=0; i<t; i++)
    {
        if(arr[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}