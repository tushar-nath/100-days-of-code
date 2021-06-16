#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, n;
    cin>>x>>n;
    for (int i=0; i<n; i++)
    {
        cout<<pow(x,i)<<endl;
    }

    return 0;
}