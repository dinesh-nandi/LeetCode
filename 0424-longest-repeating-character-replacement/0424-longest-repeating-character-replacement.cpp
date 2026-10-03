class Solution {
public:
    int find(vector<int> arr){
        int maxi = 1;
        for(int i =0; i<256; i++){
            maxi = max(arr[i],maxi);
        }
        return maxi;
    }
    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        vector<int> arr(256,0);
        int result = INT_MIN;

        for(high=0; high<s.size(); high++){
            arr[s[high]]++;
            int maxCount = find(arr);
            int len = high - low + 1;
            int diff = len - maxCount;

            while(diff > k){
                arr[s[low]]--;
                low++;
                maxCount = find(arr);
                len = high - low + 1;
                diff = len - maxCount;
            }
            len = high-low+1;
            result = max(result,len);
        }
        return result;
    }
};