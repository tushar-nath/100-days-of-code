#include <iostream>
#include <string>

using namespace std;

int main()
{
    char c[100];
    cin>>c;
    int l=strlen(c);
    for (int i=0; i<l; i++)
    {
        if (isupper(c[i]))
        {
            c[i]=tolower(c[i]);
        }
    }

    for (int i=0; i<l; i++)
    {
        if(c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u' && c[i]!='y' )
        {
            cout<<".";
            cout<<c[i];
        }
    }

    return 0;
}