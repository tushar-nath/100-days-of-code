#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int n,m;
    cin>>n>>m;
    int a;
    a=min(n,m);
    if (a%2==0) cout<<"Malvika";
    else cout<<"Akshat";
    return 0;
}