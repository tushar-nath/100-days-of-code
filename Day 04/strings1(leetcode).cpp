class Solution {
public:
string restoreString(string const &s, vector<int> const &indices) 
{
    string out(s.size(), '\0');
    auto in = s.cbegin();
    for (auto i : indices)
        out[i] = *in++;
    return out;
}
    
};

    