#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s="aabbbcccdddd";

    // Max frequency of a character

    int a[26]; // 26 alphabets in english 

    for (int i=0; i<26; i++)
    {
        a[i]=0;
    } 

    for (int i=0; i<s.size(); i++)
    {
        a[s[i]-'a']++;
    }

    char ans='a';
    int maxFreq=0;

    for (int i=0; i<26; i++)
    {
        if (maxFreq<a[i])
        {
            maxFreq=a[i];
            ans='a'+i;
        }
    }

    cout<<maxFreq<<" ";
    cout<<ans;

    return 0;

}