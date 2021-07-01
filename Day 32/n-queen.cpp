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

bool isSafe(int** arr, int x, int y, int n) {
    for0(row, x) {
        if(arr[row][y]==1) return false;
    }

    int row=x;
    int col=y;
    while (row>=0 && col>=0) {
        if(arr[row][col]==1) return false;
        row--;
        col--;
    }

    row=x;
    col=y;
    while (row>=0 && col<n) {
        if(arr[row][col]==1) return false;
        row--;
        col++;
    }

    return true;
}

bool nQueen(int** arr, int x, int n) {
    if(x>=n) return true;
    for0(col,n) {
        if(isSafe(arr,x,col,n)) {
            arr[x][col]=1;
            if(nQueen(arr, x+1, n)){
                return true;
            }
            arr[x][col]=0;  //backtracking
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int n;
    cin>>n;
    int** arr=new int*[n];
    for0(i,n) {
        arr[i]=new int[n];
        for0(j,n) arr[i][j]=0;
    }

    if(nQueen(arr,0,n)){
        for0(i,n) {
            for0(j,n) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}