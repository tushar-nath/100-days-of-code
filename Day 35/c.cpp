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

void solve () {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for0(i,n) cin>>arr[i];
    int i=0;
    int m=0;
    int p=0;
    while(1) {
        int num1=pow(2,p);
        int num2=num1^arr[i];
        if(num2<arr[i]) {
            arr[i]=num2;
            i++;
        }
        else if(num2>arr[i]) {
            i++;
        }
        if(i=n-1) {
            int i=0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}