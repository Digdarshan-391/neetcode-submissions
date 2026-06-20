class Solution {
    public:
     void calculate(int i,vector<int>&nums,vector<int>&res,vector<vector<int>>&ans)
        {
            if(i==nums.size()){
                ans.push_back(res);
                return;
            }
            res.push_back(nums[i]);
            calculate(i+1,nums,res,ans);
            res.pop_back();
            calculate(i+1,nums,res,ans);
        }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>res;
        vector<vector<int>>ans;
        calculate(0,nums,res,ans);
        return ans;
        
    }
};
