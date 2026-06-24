class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            // Find odd element on the left and even element on the right to swap
            if (nums[left] % 2 != 0 && nums[right] % 2 == 0) {
                swap(nums[left], nums[right]);
            }
            // Advance left if it's already even
            if (nums[left] % 2 == 0) {
                left++;
            }
            // Decrement right if it's already odd
            if (nums[right] % 2 != 0) {
                right--;
            }
        }
        
        return nums;
    }
};