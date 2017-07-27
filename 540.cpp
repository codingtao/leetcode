/*
O(log(n))的时间复杂度,O(1)的空间复杂度
排好序的
采用二分查找最为合适
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sz = nums.size();
        int l = 0;
        int r = sz - 1;
        
        while(l<r){
            int m = l + (r-l)/2;
            if(m%2==0){
                if(nums[m] == nums[m -1]) r = m-2;
                else if(nums[m]== nums[m+1]) l = m+2;
                else return nums[m];
            }
            else{
                if(nums[m] == nums[m-1]) l = m + 1;
                else if(nums[m] == nums[m+1]) r = m -1;
                else return nums[m];
            }
        }
        return nums[l];
    }
};