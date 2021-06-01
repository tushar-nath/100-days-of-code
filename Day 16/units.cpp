#include <iostream>

using namespace std;

void units()
{
    cout<<"The following commands are available\n1.Kilometre to Miles\n2.Inches to Feet\n3.Centimetre to Inches\n4.Inches to Metre\nPound to Kilograms\nEnter your choice between 1-5 to use the conversions or 0 to quit : ";
    int a;
    float v;
    cin>>a;
    switch(a)
    {
        case 1:
        {
            cout<<"Enter the value: ";
            cin>>v;
            cout<<v*0.6214;
            break;
        }
        case 2:
        {
            cout<<"Enter the value: ";
            cin>>v;
            cout<<v*0.0833;
            break;
        }
        case 3:
        {
            cout<<"Enter the value: ";
            cin>>v;
            cout<<v*0.394;
            break;
        }
        case 4:
        {
            cout<<"Enter the value: ";
            cin>>v;
            cout<<v*0.0254;
            break;
        }
        case 5:
        {
            cout<<"Enter the value: ";
            cin>>v;
            cout<<v*0.4536;
            break;
        }
        default:
            break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cout<<"Enter test cases\n";
    cin>>t;
    while(t--)
    {
        units();
    }

    return 0;
}