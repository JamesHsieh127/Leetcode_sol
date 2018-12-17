class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];

        vector<int> cur_sum(nums.size()+1);
        cur_sum[0] = 0;
        int max_sum = INT_MIN;
        for(int i =1; i<=nums.size(); ++i)
        {
            cur_sum[i] = nums[i-1]+(cur_sum[i-1]>0? cur_sum[i-1] : 0);
            if(cur_sum[i] > max_sum)
            {
                max_sum = cur_sum[i];
            }
        }
        return max_sum;
    }
};
