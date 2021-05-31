#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> v;
    for (int i=0; i<m; i++) 
    {
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    int x=INT64_MAX;
    for (int i=0; i<m; i++)
    {
        x=min(x)
    }
}