class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights; // Copy original heights
        
        // Sort expected heights to non-decreasing order
        sort(expected.begin(), expected.end());
        
        int mismatchCount = 0;
        // Count indices where heights do not match the expected sorted order
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                mismatchCount++;
            }
        }
        
        return mismatchCount;
    }
};