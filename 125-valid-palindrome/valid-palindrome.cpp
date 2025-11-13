class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                s[j] = tolower(s[i]);
                j++;
            }
        }
        s.resize(j);

        int left = 0;
        int right = j - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};