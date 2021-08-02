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

#define N 100

class Stack {
    int* arr;
    int top;

    public:
    Stack() {
        arr=new int[N];
        top=-1;
    }

    void push (int x) {
        if (top==N-1){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x; 
    }

    void pop() {
        if(top==-1) {
            cout<<"no element to pop";
            return;
        }
        top--;
    }

    int Top () {
        if (top==-1) {
            cout<<"no element in stack";
            return -1;
        }

        return arr[top];
    }

    bool empty() {
        return top==-1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty();
    return 0;
}