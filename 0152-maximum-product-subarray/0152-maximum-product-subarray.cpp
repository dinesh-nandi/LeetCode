class Solution {
public: 
    int maxProduct(vector<int>& nums) {

        int ans = nums[0];
        int max_ending = nums[0];
        int min_ending = nums[0];

        for(int i = 1;  i < nums.size(); i++){

            int a = max_ending*nums[i];
            int b = nums[i];
            int c = min_ending*nums[i];

            min_ending = min({a,b,c});
            max_ending = max({a,b,c});

            ans =  max(ans,max_ending);

        }
        return ans;
    }
};