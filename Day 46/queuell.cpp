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

class node{
    public:
    int data;
    node* next;

    node (int val) {
        data=val;
        next=NULL;
    }
};

class Queue {
    public:
    node* front;
    node* back;
    Queue() {
        front=NULL;
        back=NULL;
    }

    void push(int x) {
        node* n=new node(x);

        if(front==NULL) {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop() {
        if(front==NULL) {
            cout<<"Queue underflow";
            return;
        }

        node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peek() {
        if(front==NULL) {
            cout<<"Queue underflow";
            return -1;
        }

        return front->data;
    }

    bool empty() {
        if(front==NULL) {
            return true;
        }
        return false;

    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;

    return 0;
}