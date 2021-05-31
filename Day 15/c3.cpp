// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int a,b,c,d,k;
        cin >> a >> b >> c >> d >> k;
        int minmoves= abs(c-a)+abs(d-b);
        if(minmoves%2==0){
            if(k>=minmoves && k%2==0)
                cout << "YES"<<"\n";
            else
                cout << "NO"<<"\n";
        }
        else
        {
            if(k>=minmoves && k%2!=0)
                cout << "YES" <<"\n";
            else
                cout << "NO" <<"\n";
        }
    }
    return 0;
}