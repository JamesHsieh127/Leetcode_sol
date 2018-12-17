class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        if(nums.size() == 0) return result;

        unordered_map<int, int> hash_table(nums.size());
        for(int i =0; i<nums.size(); ++i)
        {
            if(hash_table.find(target - nums[i]) != hash_table.end())
            {
                result.push_back(hash_table[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            else hash_table[nums[i]] = i;
        }
        return result;
    }
};
