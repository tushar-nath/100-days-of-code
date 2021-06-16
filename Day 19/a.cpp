#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int j=1;
    int a[4];
    while (t--)
    {
        int x, y, max1, max2;
        int arr[4];
        for (int i=0; i<4; i++)
        {
            cin>>arr[i];
        }
        if (arr[0]>arr[1])
            x=arr[0];
        else 
            x=arr[1];
        if (arr[2]>arr[3])
            y=arr[2];
        else 
            y=arr[3];

        int m, n, min, temp;
        for (m = 0; m<3; m++) {
        min = m;
        for (n = m + 1; n < 4; n++)
        if (a[j] < a[min])
        min = n;
        temp = arr[m];
        arr[m] = arr[min];
        arr[min] = temp;
        }
        
        max1=arr[3];
        max2=arr[2];
        if(max1==y && max2==x)
        {
            a[j]=1;
            j++;
        }
        else if(max1==x && max2==y)
        {
            a[j]=1;
            j++;
        }
        else
        {
            a[j]=0;
            j++;
        }

        
    }

    for(j=1; j<=4; j++){
        if(a[j]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}