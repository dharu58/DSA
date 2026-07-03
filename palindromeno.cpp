class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        int dup = x;
        int revno = 0;
        while (x != 0) {
            int lastdigit = x % 10; 
            if ((revno > INT_MAX/10)){
                return 0;
            }
            revno = (revno*10) + lastdigit;
            x = x/10;

        }
        if (revno == dup){
            return true;

        } 
        
        else {
            return false;
        }
    }   
};