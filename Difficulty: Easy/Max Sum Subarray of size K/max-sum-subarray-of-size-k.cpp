class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low = 0;
        int high = k-1;
        int sum = 0;
        int max = INT_MIN;
        
        for(int i = low; i <= high; i++){
            sum += arr[i];
        }
        
        while(high < arr.size()){

            if(max < sum){
                max = sum;
            }
            
            high++;
            low++;
            
            if(high == arr.size()){
                break;
            }
            
            sum = sum - arr[low-1];
            sum = sum + arr[high];
        
        }
        
        return max;
    }
};