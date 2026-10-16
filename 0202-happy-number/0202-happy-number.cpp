class Solution {
public:
    int nextNumber(int n){
        int sum = 0;

        while(n > 0){
            int digit = n % 10;
            n = n/10;
            sum += digit*digit;
        }
        return sum; 
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while(true){
            slow = nextNumber(slow);
            fast = nextNumber(nextNumber(fast));
            
            if(slow == fast){
                break;
            }
        }

        return slow == 1;
    }
};