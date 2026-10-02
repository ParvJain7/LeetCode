class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>merge;

        for(int i=0;i<m;i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());
        int k=merge.size();
       if(k % 2 == 1) {
            return merge[k / 2];
        }
        else {
            return (merge[k / 2 - 1] + merge[k / 2]) / 2.0;
        }
    }
};