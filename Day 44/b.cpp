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

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin>>t;
    while (t--) {
        int x,y;
        int m=0, n=0;
        cin>>x>>y;
        int ans;
        ans=gcd(x,y);
        if(ans>1) cout<<"0"<<endl;
        else {
            while (ans==1) {
                gcd(x++,y);
                m++;
            }
            while (ans==1) {
                gcd(x,y++);
                n++;
            }
        }
        int a=min(m,n);
        cout<<a<<endl;
    }
    return 0;
}