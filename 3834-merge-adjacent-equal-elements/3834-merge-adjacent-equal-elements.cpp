class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==v.back()){
                v.back()=v.back()*2;
                while (v.size() > 1 && v.back() == v[v.size() - 2]) {
                    long long doubled = v.back() * 2;
                    v.pop_back(); 
                    v.back() = doubled; 
                }
            }else{
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};