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

int first(int arr[], int l, int r, int x) {
    if(l<=n) {
        int mid=(l+r)/2;
        if(x==arr[mid] && x!=arr[mid-1]) return mid;
        else if(x<arr[mid]) return first(arr,l,mid-1,x);
        else return first(arr,mid+1,n,x);
    }
    return -1;
}

int last(int arr[], int l, int r, int x) {
    if(l<=n) {
        int mid=(l+r)/2;
        if(x==arr[mid] && x!=arr[mid+1]) return mid;
        else if(x<arr[mid]) return last(arr,l,mid-1,x);
        else return last(arr,mid+1,n,x);
    }
    return -1;
}

void res(int arr[], int l, int r, int x) {
    cout<<first(arr,l,n-1,x);
    cout<<last(arr,l,n-1,x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n,x;
    cin>>n;
    int arr[n];
    for0(i,n) cin>>arr[i];
    cin>>x;
    int l=0;
    binary(arr,l,n-1,x);
    return 0;
}