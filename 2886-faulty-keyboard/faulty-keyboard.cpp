class Solution {
public:
    string finalString(string s) {
        string result = "";
        for (char c : s) {
            if (c == 'i') {
                // Reverse the string written so far
                reverse(result.begin(), result.end());
            } else {
                result.push_back(c);
            }
        }     
        return result;
    }
};