class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1, -1};
        int left = 0;
        int right = nums.size();
        int middle = 0;

        if(nums.size() == 0) return result;

        while(left < right)
        {
            middle = (left+right)/2;
            if(nums[middle] < target) left = middle+1;
            else right = middle;
        }
        if(left < nums.size() && nums[left] == target) result[0] = left;

        left =0;
        right = nums.size();
        while(left < right)
        {
            middle = (left+right)/2;
            if(nums[middle] <= target) left = middle+1;
            else right = middle;
        }
        if(left > 0 && nums[left-1] == target) result[1] = left-1;
        return result;
    }
};

// Resolve by C++ STL
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty())return { -1,-1 };
		if (target<nums[0] || target>nums[nums.size() - 1])return { -1,-1 };
		const int l = distance(nums.begin(), lower_bound(nums.begin(), nums.end(), target));
		const int u = distance(nums.begin(), prev(upper_bound(nums.begin(), nums.end(), target)));
		if (nums[l] != target) // not found
			return vector<int> { -1, -1 };
		else
			return vector<int> { l, u };
    }
};
