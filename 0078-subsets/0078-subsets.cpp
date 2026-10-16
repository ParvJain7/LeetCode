class Solution {
public:

    void subseq(vector<int>&arr,int n,int index,vector<vector<int>>&ans,vector<int>&temp){
        if(index==n){
            ans.push_back(temp);
            return;
        }
        subseq(arr,n,index+1,ans,temp);
        temp.push_back(arr[index]);
        subseq(arr,n,index+1,ans,temp);
         temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        subseq(nums,n,0,ans,temp);
        return ans;
    }
};