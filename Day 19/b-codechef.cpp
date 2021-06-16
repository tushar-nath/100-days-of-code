// #include <iostream>

// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int D,d,P,Q;
//         cin>>D>>d>>P>>Q;
//         int m=0, sum=0, count=0; 
//         for (int i=0; i<D; i++)
//         {
//             if(count==d)
//             {
//                 count=0;
//                 m++;
//             }
//             count++;
//             sum+=(P+(m*Q));
//         }
//         cout<<sum<<"\n";
//     }
//     return 0;
// }



#include <iostream>

using namespace std;

void heist()
{
    int D,d,P,Q;
    cin>>D>>d>>P>>Q;
    int sum=0;
    int n=((D-(D%d))/d);
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
        {
            sum+=((P+((i+1)*Q)))*(D%d);
        }
        sum+=((P+(i*Q)))*d;
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        heist();
    }

    return 0;
}