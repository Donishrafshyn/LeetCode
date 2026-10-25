class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> map;
        int balance=0;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            balance=target-nums[i];
            if(map.count(balance) && map[balance]!=i){
                return {i,map[balance]};
            }
        }
        return{};
    }
};