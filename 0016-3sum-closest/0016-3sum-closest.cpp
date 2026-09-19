class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff_max = INT_MAX;
        int result;

        for(int i = 0; i<nums.size()-2; i++){

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int j = i+1;
            int k = nums.size()-1;

            while(j < k){

                
                int sum = nums[i]+nums[j]+nums[k];
                int diff = abs(sum-target);
                if(diff < diff_max){
                    diff_max = diff;
                    result = sum;                    
                }
                if(sum == target){
                    return sum;
                }else if(sum > target){
                    k--;
                }else{
                    j++;
                }
            }
        }

        return result;
    }
};