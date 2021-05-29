#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string word="hello";
    string s;
    cin>>s;
    int a=0, count=0;
    for (int i=0; i<s.length(); i++)
    {
        if(s[i]==word[a])
        {
            count++;
            a++;
        }
    }
    if (count==5) cout<<"YES";
    else cout<<"NO";

    return 0;
}