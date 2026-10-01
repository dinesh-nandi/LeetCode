class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int low = 0;
        int high = 0;

        int result = INT_MIN;
        unordered_map<int,int> mp;

        for(high = 0; high < fruits.size(); high++){

            mp[fruits[high]]++;

            while(mp.size() > 2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0){
                    mp.erase(fruits[low]);
                }
                low++;
            }

            int len = high - low + 1;
            result = max(len,result);
            
        }

        return result;
    }
};