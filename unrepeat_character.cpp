class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char,int>mp;
        for(auto e:s)
        mp[e]++;

        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]<2)
            return i;
        }

        return -1;
        
    }
};