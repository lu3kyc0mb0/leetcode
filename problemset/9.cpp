class Solution {
public:
    bool isPalindrome(int x) {
        string b=to_string(x);
        string a=to_string(x);
        reverse(a.begin(),a.end());
        if(a==b) return true;
        return false;
    }
};