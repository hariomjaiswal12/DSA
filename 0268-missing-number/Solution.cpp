class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(),sum1=0,sum2=0;

        for(int i=0; i<=n; i++){
            sum1 = sum1 + i;
        }

        for(int i=0; i<n; i++){
            sum2 = sum2 + nums[i];
        }

        return sum1-sum2;
    }
};