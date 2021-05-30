#include <iostream>
#include <string>
using namespace std;
 
#define int long long
 
void solve()
{
  int k;
  cin>>k;
 
  bool ok=true;
 
  for(int i=0;i<k;i++)
  {
    string s;
    cin>>s;
 
    if(!ok)
      continue;
 
    bool fst=true,snd=true;
 
    for(auto ch: s)
    {
      if(ch>='a' && ch<='m')
        fst=false;
      else if(ch>='N' && ch<='Z')
        snd=false;
      else
        ok=false;
    }
 
    if(!fst && !snd)
      ok=false;
  }
 
  if(ok)
    cout<<"Yes"<<"\n";
  else
    cout<<"NO"<<"\n";
}
 
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  int t;
  cin>>t;
 
  while(t--)
    solve();
 
return 0;
}

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     int maxCount[t];
//     for (int i=0; i<t; i++)
//     {
//         int n;
//         cin>>n;
//         int tempCount[n];
//         for (int j=0; j<n; j++)
//         {
//             string s;
//             cin>>s;
//             int x=0, y=0;
//             for (int p=0; p<s.length(); p++)
//             {
//                 if (s[p]=='a' || s[p]=='b' || s[p]=='c' || s[p]=='d' || s[p]=='e' || s[p]=='f' || s[p]=='g' || s[p]=='h' || s[p]=='i' || s[p]=='j' || s[p]=='k' || s[p]=='l' || s[p]=='m' )
//                 {
//                     x++;
//                 }
//                 else if (s[p]=='N' || s[p]=='O' || s[p]=='P' || s[p]=='Q' || s[p]=='R' || s[p]=='S' || s[p]=='T' || s[p]=='U' || s[p]=='V' || s[p]=='W' || s[p]=='X' || s[p]=='Y' || s[p]=='Z' )
//                 {
//                     y++;
//                 }
//             }
//            if (x!=0 && y!=0)
//            {
//                tempCount[j]=0;
//            }
//            else 
//            {
//                tempCount[j]=1;
//            }
//         }
//         int one=0, zero=0;
//         for (int q=0; q<n; q++)
//         {
//             if (tempCount[q]==0)
//             {
//                 zero++;
//             }
//             else
//             {
//                 one++;
//             }
//             if(one!=0 && zero!=0)
//             {
//                 maxCount[i]=0;
//             }
//             else
//             {
//                 maxCount[i]=1;
//             }
            
            
//         }
//     }

//     for(int i=0; i<t; i++)
//     {
//         if (maxCount[i]==1)
//         {
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//            cout<<"NO"<<endl;
//         }
        
//     }

//     return 0;
// }