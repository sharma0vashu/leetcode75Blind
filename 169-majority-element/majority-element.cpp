class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int val:nums){
            int maxocc=0;
            for(int el:nums){
                if(val==el){
                    maxocc++;
                }
            }
            if(maxocc>nums.size()/2){
                return val;
            }
        }
        return -1;
    }
};