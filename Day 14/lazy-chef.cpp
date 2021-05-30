#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int m[t], x[t], d[t];
    for (int i=0; i<t; i++)
    {
        cin>>x[i]>>m[i]>>d[i];
    }
    for (int i=0; i<t; i++)
    {
        cout<<min((x[i]*m[i]),(x[i]+d[i]))<<endl;
    }

    return 0;
}