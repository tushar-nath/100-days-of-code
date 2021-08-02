#include <iostream>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionsort(int arr[], int n)
{
    int i, j, min_idx;
 
    
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void merge( int ar_a[],int ar_b[],int an ,int bn ,int res[])
{
    int a =0 , b = 0 , i=0;
    while((a<=an && b<=bn)&&(i<(an+bn)))
    {
        if(ar_a[a]==ar_b[b])
        {
            res[i]=ar_a[a];
            i++;
            a++;
            res[i]=ar_b[b];
            i++;
            b++;
        }
        if(ar_a[a]<ar_b[b])
        {
            res[i]=ar_a[a];
            a++;
            i++;
            
        }
        if(ar_a[a]>ar_b[b])
        {
            res[i]=ar_b[b];
            b++;
            i++;
            
        }
    }
}
int main()
{
    int ara[5]= {2,3,6,22,43};
    int arb[5]= {1,15,17,23,34};
    int c=sizeof(ara)+sizeof(arb);
    int arc[c];
    merge(ara,arb,5,5,arc);
    printArray(arc,10);
    
    
    return 0;
}