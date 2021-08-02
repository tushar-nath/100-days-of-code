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

void insertAtBottom (stack<int> &st, int ele) {

    if(st.empty()) {
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(topele);
}

void reverse(stack<int> &st) {

    if(st.empty()) {
        return;
    }

    int ele=st.top();
    st.pop();
    reverse (st);
    insertAtBottom(st,ele);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}