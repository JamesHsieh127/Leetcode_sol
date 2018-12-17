class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long result;
        result = (1+nums.size())*nums.size()/2;
        for(int i=0; i< nums.size(); i++)
        {
            result -= nums[i];
        }
        return result;
    }
};


// XOR soultion:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        for(int i =0; i<nums.size(); i++)
        {
            result ^= (i+1)^nums[i];
        }
        return result;
    }
};
