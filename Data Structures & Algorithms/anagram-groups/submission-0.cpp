class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        int size = strs.size();
        unordered_map<string,int>mp;
        for(int i=0; i< size ; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            if(mp.find(s) == mp.end())
            {
                mp[s] = ans.size();
                ans.push_back({strs[i]});
            }
            else{
                ans[mp[s]].push_back(strs[i]);
            }
        }
        return ans;
        
    }
};
