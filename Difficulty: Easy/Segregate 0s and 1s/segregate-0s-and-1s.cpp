class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size()-1;
        
        while(i < j){
            int temp;
            if(arr[i] == 0){
                i++;
            }
            else if(arr[j] == 1){
                j--;
            }
            else if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
    }
};