// #include <stdio.h>


// int main()
// {
//     int table;
//     printf("\nEnter the no. you want Multiplication table of:\t");
//     scanf("%d", &table);
//     printf("\nThe table of %d is : ", table);
//     for(int i=1; i<=10; i++)
//     {
//         printf("\n%d * %d = %d\n", table,i,table*i);
//     }
    
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number for multiplication table"; 
    int n;
    cin>>n;
    for (int i=1; i<=10; i++)
    {
        cout<<n*i<<endl;
    }

    return 0;
}