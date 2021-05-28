#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, str;

    cin>>s;
    int l=s.length();
    for (int i=0; i<l; i++)
    {
        if (isupper(s[i])) s[i] = tolower(s[i]);
    }
    for (int i=0; i<l; i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' )
        {
            cout<<"."<<s[i];
        }
    }
    return 0;
}