// https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    char s[100];
    int l=str.length();
    int j=0;
    for (int i=0; i<l; i++)
    {
        if(str[i]!='+')
        {
            s[j]=str[i];
            j++;
        }
    }

    sort(s,(s+j));

    for (int i=0; i<j; i++)
    {
        if(i == j - 1)
            cout<<s[i]<<endl;
        else
        {
            cout<<s[i]<<"+";
        }
        
    }

    return 0;

}