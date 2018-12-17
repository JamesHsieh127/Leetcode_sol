class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        if(numRows < 1) return result;

        vector<int> row(1,1);
        result.push_back(row);

        for(int i =2; i<=numRows; i++)
        {
            int previous = 1;
            for(int j =1; j<i-1; j++)
            {
                int temp = row[j];
                row[j] += previous;
                previous = temp;
            }
            row.push_back(1);
            result.push_back(row);
        }
        return result;
    }
};
