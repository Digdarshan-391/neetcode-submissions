class Solution {
    public :
     int calculate(int i,int n,vector<int>&nums,int ans)
    {
        if(i>=n)
        return ans;
        ans ^= nums[i];
        // cout<< "Value of i = " << i << " Value of take = " << (ans) << " Vaule of ans = "<< ans << '\n';
        int take = calculate (i+1,n,nums,ans);
        ans  ^= nums[i]; 
        // cout<< "Value of i = " << i << " Value of not take = "<< ans << '\n';
        int not_take = calculate (i+1,n,nums,ans);
        // cout << "Sum = "<< (take+not_take) << '\n';
        return take + not_take;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        return calculate(0,n,nums,0);
        
    }
};