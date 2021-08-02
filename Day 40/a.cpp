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

int find(int arr[], int l, int r) {
    if(l<=r) {
        int mid=(l+r)/2;
        if(arr[mid]==0 && arr[mid-1]==1) return mid;

        if(arr[mid]==1) return find(arr,mid+1,r);  
        else return find(arr,l,mid-1);
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n;
    cin>>n;
    int arr[n];
    for0(i,n) cin>>arr[i];
    int l=0;
    cout<<(n-find(arr,l,n-1));
    return 0;
}