/*
这是一道数学题
ai bi之间的差值越小,得到的Suma越大
*/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2){
            sum+=nums[i];
        }
        return sum;
    }
};