class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>freq;
        vector<int>running_sum;
        int curr_sum =0;
        int ans = -1;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            running_sum.push_back(curr_sum);
            freq[curr_sum]++;
            
        }
        ans = freq[k];
        for(auto &it : running_sum)
        {
            int remaining = (it+k);
            freq[it]--;
            ans+=freq[remaining];

        }
        return ans;
    }
};