/*Removes a specific integer from an array of integers, and returns the number of times
that integer was removed.*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int k = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
