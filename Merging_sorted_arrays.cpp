/*Given two sorted arrays, nums1 and nums2, merge the two while keeping the answer within nums1.
The final array must be sorted in increasing order. nums1 is given enough space for nums1 and nums2.
The integers m and n dictate the number of elements in nums1 and nums2, respectively.*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
