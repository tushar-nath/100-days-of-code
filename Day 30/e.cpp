#include <bits/stdc++.h>

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)

using namespace std;

#define pb push_back
#define pob pop_back
#define fi first
#define se second

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n,q;
    cin>>n>>q;
    int arr[n];
    for1(i,n) cin>>arr[i];
    for0(i,q)
    {
        int m;
        cin>>m;
        if(m==1)
        {
            int l,r,x;
            cin>>l>>r>>x;
            for(int i=l; i<=r; i++)
            {
                int p=pow((x+i-l),2);
                arr[i]+=p;
            }
        }
        else if (m==2)
        {
            int y;
            cin>>y;
            cout<<arr[y]<<endl;
        }
    }
    return 0;
}