class Solution {
public:
    bool divideArray(vector<int>& nums) {
   
        int frequencies[501] = {0};

        for (int num : nums) {
            frequencies[num]++;
        }
   
        for (int i = 1; i <= 500; i++) {
            if (frequencies[i] % 2 != 0) {
                return false; 
            }
        }
        
        return true;
    }
};