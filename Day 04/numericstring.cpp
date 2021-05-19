#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s ="527458";
    
    // find the biggest number using the above string

    sort(s.begin(), s.end(), greater<int>());

    cout<<s;

    return 0;
} 