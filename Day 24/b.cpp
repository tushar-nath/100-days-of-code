#include <iostream>

using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
        if(sum==n || sum>n)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}