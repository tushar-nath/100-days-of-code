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

bool search(node* head, int key) {
    node* temp=head;
    while(temp!=NULL) {
        if(temp->data==key) {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* head) {
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* head, int val) {

    if(head==NULL) return;

    if(head->next==NULL) deleteAtHead(head);

    node* temp=head;
    while(temp->next->data!=val) {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
    // insertAtHead(head,4);
    deleteAtHead(head);
    display(head);
    // cout<<search(head,5)<<endl;
    return 0;
}