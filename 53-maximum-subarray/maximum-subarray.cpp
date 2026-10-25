class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxprofit=nums[0];
        int current=0;
        for(int i=0;i<nums.size();i++){
            current=max(nums[i],current+nums[i]);
            maxprofit=max(maxprofit,current);
        }
        return maxprofit;
    }
};