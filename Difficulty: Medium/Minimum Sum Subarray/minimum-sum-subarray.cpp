class Solution {
  public:
    int minSubarraySum(vector<int> &arr) {
        // code here
        int ans = arr[0];
        int best_ending = arr[0];
        
        for(int i = 1; i < arr.size(); i++){
            int a = best_ending + arr[i];
            int b = arr[i];
            
            best_ending = min(a,b);
            ans = min(ans,best_ending);
        }
        
        return ans;
    }
};