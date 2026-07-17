class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a(nums1.begin(),nums1.begin()+m);
        int i=0;
        int j=0;
        int k=0;
        while(i<m && j<n){
            if(nums2[j]<=a[i]){
                nums1[k++]=nums2[j++];
            }else{
                nums1[k++]=a[i++];
            }
        }
        while(i<m){
            nums1[k++]=a[i++];
        }
        while(j<n){
            nums1[k++]=nums2[j++];
        }
    }
};