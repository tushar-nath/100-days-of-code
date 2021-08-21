#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int len = nums.size();
        map<int, int> m;
        for(int i=0; i<len; i++)
        {
            int x = nums[i];
            int y = target -x;
            if(m.find(y) != m.end())
                return {i, m[y]};
            m[nums[i]] = i;
        }
        return {-1, -1};
    }

};

int main()
{
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        cin>>nums[i];
    int target; cin>>target;

    solution ob;
    auto ans = ob.twoSum(nums, target);
    cout<<ans;
    return 0;
}