class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while(left<=right)
        {
            //int middle = left + (right-left)/2;
            int middle = (right+left)/2;
            if(nums[middle] == target) return middle;

            else if(nums[middle]<nums[right])
            {
                if(nums[middle] < target && nums[right] >= target) left = middle+1;
                else right = middle-1;
            }

            else
            {
                if(nums[left] <= target && nums[middle] > target) right = middle -1;
                else left = middle +1;
            }
        }
        return -1;
    }
};
