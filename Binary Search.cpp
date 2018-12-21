class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0;
        int right =nums.size()-1;
        int middle = (left+right)/2;

        while(left <= right)
        {
            if(nums[middle] == target) return middle;
            else if(nums[middle] > target) right = middle-1;
            else left=middle+1;
            middle = (left+right)/2;
        }
        return -1;
    }
};
