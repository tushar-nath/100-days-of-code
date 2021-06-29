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
    int t;
    cin>>t;
    while(t--)
    {
        int l,h,x=0,count=0,m=0;
        cin>>l>>h;
        string str;
        cin>>str;
        for0(i,l)
        {
            if (str[i]=='0') 
            {
                x++;
                m++;
                if(x==h || m==h) count++;
            }
            else if (str[i]=='1' && x!=0 && str[i-1]!=1)
            {
                h=2*(h-x);
                m=0;
            }
        }
        if(count>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
