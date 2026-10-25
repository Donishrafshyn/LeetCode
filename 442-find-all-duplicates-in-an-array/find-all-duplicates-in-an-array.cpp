class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>arr;
        for(int x:nums){
            freq[x]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(freq[i]>1){
                arr.push_back(i);
            }
        }
        return arr;
    }
};