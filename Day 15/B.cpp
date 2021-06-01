#include <iostream>
#include <vector>
#include <cmath>
#include <array>
#include <cstdlib>

using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector <int> arr(n);
    for (auto &x : arr) cin>>x;
    int s1=0, s2=0;
    sort(arr.begin(), arr.end());
    while (k--){
        s1+=arr.back(); arr.pop_back();
        s2+=arr.back(); arr.pop_back();
    }
    s2+=arr.back(); 
    cout<<max(s1,s2)<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}