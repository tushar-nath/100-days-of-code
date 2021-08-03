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
#define n 20

class Queue {
    int* arr;
    int front;
    int back;
    
    public :
    Queue() {
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void push(int x) {
        if(back==n-1){
            cout<<"queue overflow";
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1) front++;
    }

    void pop() {
        if (front==-1 || front>back) 
        {
            cout<<"queue is empty";
            return;
        }
        front++;
    }
    int peek() {
        if (front==-1 || front>back) 
        {
            cout<<"queue is empty";
            return -1;
        }
        return arr[front];
    }
    bool empty() {
        if (front==-1 || front>back) 
        {
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
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}