#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int test;
    cin >> test;
    int sum1=0, sum2=0, totalSum=0;	//sum1 is of the 1st brother and sum2 is of the second brother
    int arr[test];
    int count = 0;
    for (int i = 0; i < test; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }
    sort(arr, arr + test, greater<int>());  //normally sort gives ascending order, greater<int>() is used for descending order
    for (int i =0; i < test; i++)
    {
        sum1 = sum1 + arr[i];
        sum2 = totalSum - arr[i];
        count++;			//ultimate output
        if (sum1 > totalSum/2)
	        break;
    }
    cout << count << endl;
    return 0;
}