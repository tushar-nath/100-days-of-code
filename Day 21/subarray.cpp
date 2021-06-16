// Find the maximum subarray sum

// test case: -1 4 7 2
// output: 13 

// sum of 4 7 2
 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m=0;
    cin>>n;
    vector <int> v;
    for (int i=0; i<n; i++)
    {
        v.push_back(i);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i=0; i<n; i++)
    {
        if(v[i]!=0)
        {
            m+=v[i];
        }
    }
    cout<<m;
    return 0;
}