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

class node {
    public :
    int data;
    node* next;

    node (int val) {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n= new node(val);
    n->next=head;
    head=n;
}

void insertAtTail (node* &head, int val) {
    node* n= new node(val);

    if(head==NULL) {
        head=n;
        return;
    }

    node* temp=head;
    while (temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head) {
    node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* &head) {

    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL) {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    node* newhead=reverse(head);
    display(newhead);
    return 0;
}