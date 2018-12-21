class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int middle;
        if (nums.size() == 1) return nums[0];
		if (nums.size() == 2) return (nums[0] < nums[1]) ? nums[0] : nums[1];

        while(left < right)
        {
            middle = left+(right-left)/2;
            if(nums[middle] < nums[right]) right = middle;
            else left = middle +1;
        }
        return nums[left];
    }
};
