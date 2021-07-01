// C++ code to reverse a string
#include <bits/stdc++.h>
using namespace std;
 
// Reverse the string
string RevString(string s)
{
     int l=s.length();
    // Check if number of words is even
    if (l % 2 == 0)
    {
         
        // Find the middle word
        int j = l / 2;
         
        // Starting from the middle
        // start swapping words at
        // jth position and l-1-j position
        while (j <= l - 1)
        {
            char temp;
            temp = s[l - j - 1];
            s[l - j - 1] = s[j];
            s[j] = temp;
            j += 1;
        }
    }
     
    // Check if number of words is odd
    else
    {
         
        // Find the middle word
        int j = (l / 2) + 1;
         
        // Starting from the middle start
        // swapping the words at jth
        // position and l-1-j position
        while (j <= l - 1)
        {
            char temp;
            temp = s[l - j - 1];
            s[l - j - 1] = s[j];
            s[j] = temp;
            j += 1;
        }
    }
     
    return s;
}
 
// Driver code
int main()
{
    string s;
    cin>>s;
      
    cout << RevString(s) << endl;
 
    return 0;
}
 