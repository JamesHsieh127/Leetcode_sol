class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hmap;
        for(int i = 0; i < n; i++)
        {
            if(++hmap[nums[i]] > n/2) return nums[i];
        }
    }
};
