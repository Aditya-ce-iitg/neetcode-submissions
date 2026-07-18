class Solution {
public:
    bool isPerfectPalindrome(string s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.size();
        
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                char frontChar = s[i];
                
                s.erase(i, 1);
                if (isPerfectPalindrome(s)) {
                    return true;
                }
                
                s.insert(i, 1, frontChar);
                
                s.erase(n - i - 1, 1);
                if (isPerfectPalindrome(s)) {
                    return true;
                }
                
                return false;
            }
        }
        return true;
    }
};