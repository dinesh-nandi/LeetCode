class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int best_sum = nums[0];

        for(int i = 1; i< nums.size(); i++){

            int a = best_sum + nums[i];
            int b = nums[i];

            best_sum = max(a,b);

            sum = max(sum,best_sum);            

        }

        return sum;
    }
};