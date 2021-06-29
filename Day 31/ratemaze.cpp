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
    if(x<n && y<n && arr[x][y]==1) {
        return true;
    }
    return false;
}

bool ratinMaze (int** arr, int x, int y, int n, int** solArr) {
    if(x==n-1 && y==n-1) {
        solArr[x][y]=1;
        return 1;
    }

    if(isSafe(arr,x,y,n)) {
        solArr[x][y]=1;
        if(ratinMaze(arr, x+1, y, n, solArr)){
            return true;
        }
        if(ratinMaze(arr, x, y+1, n, solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;   //backtracking
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
    int **arr = new int*[n];
    for0(i,n) arr[i]=new int[n];
    for0(i,n) {
        for0(j,n) {
            cin>>arr[i][j];
        }
    }

    int **solArr = new int*[n];
    for0(i,n) {
        solArr[i]=new int[n];
        for0(j,n) solArr[i][j]=0;
    }

    if(ratinMaze(arr,0,0,n,solArr)){
        for0(i,n) {
            for0(j,n) {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}