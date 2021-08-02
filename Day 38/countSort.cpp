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

void countSort(int arr[], int n) {
    int k=arr[0];
    for0(i,n) {
        k=max(k, arr[i]);
    }
    int count[10]={0};
    for0(i,n) count[arr[i]]++;
    for1(i,k) count[i]+=count[i-1];
    int output[n];
    forr0(i,n) output[--count[arr[i]]]=arr[i];
    for0(i,n) arr[i]=output[i];
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
    countSort(arr, n);
    for0(i,n) cout<<arr[i]<<" ";
    return 0;
}