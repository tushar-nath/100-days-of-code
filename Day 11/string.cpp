#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for (int i=0; i<str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    cout<<str;

    return 0;
}