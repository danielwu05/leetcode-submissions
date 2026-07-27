class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ispaly;

        if (s.size() <= 1) {
            return true;
        }

        for(char c : s) {
            if (isalpha(c) || isdigit(c)) {
                ispaly.push_back(tolower(c));
            }
        }

        for (int i = 0; i < ispaly.size()/2 ; i++) {
            if (ispaly[i] != ispaly[ispaly.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
};
