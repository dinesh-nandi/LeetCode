class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int low = 0;
        int high = 0;

        int result = INT_MIN;
        unordered_map<char,int> mp;

        for(high = 0; high < s.size(); high++){

            mp[s[high]]++;
            int len = high - low + 1; 

            while(len  > mp.size()){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
                len = high-low+1;
            }

            int k = high - low + 1;
            result =  max(k,result);
        }

        return result==INT_MIN ? 0 : result;
    }
};