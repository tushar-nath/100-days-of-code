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

void merge(int arr[], int l, int mid, int r) {
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for0(i,n1) a[i]=arr[l+i];
    for0(i,n2) b[i]=arr[mid+1+i];
    int i=0, j=0, k=l;
    while(i<n1 && k<n2) {
        if(a[i]<b[j]) {
            arr[k]=a[i];
            k++; i++;
        }
        else {
            arr[k]=b[j];
            k++; j++;
        }
    }
    while(i<n1) {
        arr[k]=a[i];
        k++; i++;
    }
    while(j<n2) {
        arr[k]=b[j];
        k++; j++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l<r) {
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    for0(i,5) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}