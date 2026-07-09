class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        int c=0;
        for(int val:nums){
            if(val==prev){
                c++;
            }
            if(c>n){
                
                break;
            }
            if(val !=prev){
                prev=val;
            }
        }
        return prev;

    }
};