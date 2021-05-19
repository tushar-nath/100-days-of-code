#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "TUSHAR";

    // convert to upper strings

    for (int i=0; i<str.length(); i++)
    {
        if(str[i>='a' && str[i]<='z'])
        {
            str[i]-=32;
            cout<<str[i];
        }
    }

    // convert to lower strings

    for (int i=0; i<str.length(); i++)
    {
        if(str[i>='A' && str[i]<='Z'])
        {
            str[i]+=32;
            cout<<str[i];
        }
    }

    return 0;
}