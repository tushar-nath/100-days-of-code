// #include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c[100];
    cin>>c;
    int len=strlen(c);
    for (int i=0; i<len; i++)
    {
        if(c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u' && c[i]!='A' && c[i]!='E' && c[i]!='I' && c[i]!='O' && c[i]!='U' && c[i]!='y' && c[i]!='Y')
        {
            cout<<".";
            if (isupper(c[i]))
            {
                c[i]=tolower(c[i]);
            }  
            cout<<c[i];
        }
    }

    return 0;
}