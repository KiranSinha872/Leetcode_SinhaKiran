class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {

        int min1 = nums1[0];
        for (int num : nums1) {
            min1 = min(min1, num);
        }
        

        int min2 = nums2[0];
        for (int num : nums2) {
            min2 = min(min2, num);
        }
        

        return min2 - min1;
    }
};