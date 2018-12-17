class NumArray {
public:
    vector<int> sum;

    NumArray(vector<int> nums) {
        if (nums.size() != 0)
        {
            sum.push_back(nums[0]);
            for (int i =1; i < nums.size(); i++)
            {
                sum.push_back(nums[i]+sum[i-1]);
            }
        }

    }

    int sumRange(int i, int j) {
        if(sum.size() == 0) return 0;
        if(i - 1 <0) return sum[j];
        else return sum[j]-sum[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
