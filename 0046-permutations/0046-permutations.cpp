class Solution {
public:
void permutation(vector<int>&arr,int index, int n, vector<vector<int>>&ans){
    if(index==n){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        permutation(arr,index+1,n,ans);
        swap(arr[i],arr[index]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        permutation(nums,0,n,ans);
        return ans;
    }
};