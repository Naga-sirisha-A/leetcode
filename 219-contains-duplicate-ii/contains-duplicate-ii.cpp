class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int,int>mpp;
     for(int i=0;i<nums.size();i++){
        if(mpp.count(nums[i])>0 && abs(mpp[nums[i]]-i)<=k){
            return true;
        }
        mpp[nums[i]]=i;
     }
     return false;

        
    }
};