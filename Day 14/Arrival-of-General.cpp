#include <iostream>

using namespace std;

int main(){
    int n, x=0, y=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int min=arr[0], max=arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]<=min){       // for minimum
            min=arr[i];
            x=i;
        }

        else if(arr[i]>max){       // for maximum
            max=arr[i];
            y=i;
        }
    }   
    int t; 
    if (y>x)
    {
        t=(((n-1)-x)+y)-1;
    }
    else
    {
        t=((n-1)-x)+y;
    }

    cout<<t;
    
    return 0;
}