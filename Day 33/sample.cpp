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

int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n,x,sum=0,count=0;
    cin>>n>>x;
    for(int i=1; i<=n; i+=2) {
        if(count%2==0){
            sum+=(pow(x,i))/factorial(i);
        }
        else {
            sum-=(pow(x,i))/factorial(i);
        }
        count++;
    }
    cout<<sum;
    return 0;
}