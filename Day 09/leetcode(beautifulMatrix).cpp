#include <iostream>
#include <cmath>
#define xopt 2
#define yopt 2

using namespace std;

int main()
{
    int x, y;
    int moves;
    bool arr[5][5];

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin>>arr[i][j];
            if (arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }

    moves=abs(x-xopt)+(y-yopt);
    cout<<moves;

    return 0;
}

// #include <iostream>
// #include <cmath>
// #define Xopt 2
// #define Yopt 2          //optimal position of the '1'
// using namespace std;

// int main()
// {
//     bool matrix[5][5];
//     int Xvalue, Yvalue;     //The current position of '1'

//     for(int i = 0; i < 5; i++){     //Fill In The Matrix
//         for(int j = 0; j < 5; j++){
//             cin>>matrix[i][j];
//             if(matrix[i][j] == 1){
//                 Xvalue = i;
//                 Yvalue = j;
//             }
//         }
//         cout<<endl;
//     }

//     int moves = abs(Xvalue - Xopt) + abs(Yvalue - Yopt);
//     cout<<moves;

//     return 0;
// }