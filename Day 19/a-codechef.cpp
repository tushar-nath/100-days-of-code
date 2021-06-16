#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t], i=0;
    while (t--)
    {
        int x, y, m, n;
        cin>>x>>y>>m>>n;
        cout<<(m/x)+(n/y);
        
    }
    
    return 0;
}