class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary = "";
        // convert into binary
        while (n > 0) {
            binary += n % 2;
            n /= 2;
        }


        // verify
        for (int i = 0; i < binary.length() - 1; i++) {
            if (binary[i] == binary[i+1]) {
                return false;
            }
        }

        return true;
    }
};