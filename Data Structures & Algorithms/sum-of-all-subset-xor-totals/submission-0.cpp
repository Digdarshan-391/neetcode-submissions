class Solution {
    public :
     int calculate(int i,int n,vector<int>&nums,int ans)
    {
        if(i>=n)
        return ans;
        int take = calculate (i+1,n,nums,ans^nums[i]);
        int not_take = calculate (i+1,n,nums,ans);
        return take + not_take;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        return calculate(0,n,nums,0);
        
    }
};