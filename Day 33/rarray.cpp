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

void swap(int arr[],int l,int t)
{
    int temp=arr[l];
    arr[l]=arr[t];
    arr[t]=temp;
}

void reverseArray(int arr[], int l, int t) {
    if(l>t || l==t) return;
    
    swap(arr,l,t);
    l++; t--;
    reverseArray(arr,l,t);
}

void print(int arr[], int n){
    for0(i,n) cout<<arr[i]<<" ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n;
    cin>>n;
    int arr[n];
    int l=0, t=n-1;
    for0(i,n) cin>>arr[i];
    reverseArray(arr,l,t);
    print(arr,n);
    return 0;
}

