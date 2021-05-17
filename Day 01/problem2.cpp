#include <iostream>

using namespace std;

int main()
{
    // largest word in a sentence

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen=0, maxLen=0;

    // while(1)
    // {
    //     if(arr[i] == ' ' || arr[i] == '\0')
    //     {
    //         if (currLen > maxLen)
    //         {
    //             maxLen = currLen;
    //         }
    //         currLen=0;
    //     }
    //     else
    //     {
    //         currLen++;
    //     }
    //     if(arr[i] == '\0')
    //         break;
    //     i++;
    // }

    for(i=0; i<n; i++)
    {
        if(arr[i] != ' ')
        {
            //if current character is not end of current word
            currLen++;
        }
        else 
        {
            //if end of word is found
            maxLen=max(maxLen,currLen);
            currLen=0;
        }
    }

    // We do max one more time to 
    // consider last word as there 
    // won't be any space after 
    // last word.
    maxLen=max(maxLen,currLen);
    cout<<maxLen;
    
    return 0;
}