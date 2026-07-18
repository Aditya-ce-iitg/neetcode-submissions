class Solution {
public:
    bool isPalindrome(string s) {
        for (char &c : s) {
        c = tolower(c);
    }
    s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !isalnum(c); 
    }), s.end());
    int check=1;
    for(int i=0;i<s.size()/2;i++){
        if (s[i]!=s[s.size()-i-1]){
            check=0;

        }
    }
    if (check==1){
        return true;
    }
    else {
        return false;
    }
    }
};
