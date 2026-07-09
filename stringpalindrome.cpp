class Solution {
public:
    bool isPalindrome(string s) {
        int right = 0;
        int left = s.size()-1;
        while (right < left){
            while (right < left && !isalnum(s[right])) right++;
            while(right <left && !isalnum(s[left])) left --;
            if (tolower(s[right]) != tolower(s[left])) return false;
            right++;
            left--;
        }
        return true;
    }
};