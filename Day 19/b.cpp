#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main()
{
    int t;
    cin>>t;
    int ans[t];
    int count=0;
    for (int i=0; i<t; i++)
    {
        int n; 
        cin>>n;
        int a[n];
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for (int j=2; j<n; j++)
        {
            for (int i=1; i<j; i++)
            {
                if (gcd(a[i], 2*a[j])>1)
                {
                    count++;
                }
            }
        }
        ans[i]=count;
    }
    for(int i=0; i<t; i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}