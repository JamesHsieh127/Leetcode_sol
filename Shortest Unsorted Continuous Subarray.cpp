class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int i =0, j=n-1;
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        while(i < n && nums[i] == temp[i]) ++i;
        while(j > i && nums[j] == temp[j]) --j;
        return j-i+1;
    }
};
