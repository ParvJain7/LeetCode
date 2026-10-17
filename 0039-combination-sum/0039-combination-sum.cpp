class Solution {
public:
    void sum(vector<int>& arr,int n, int index , int target, vector<int>&temp,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0||index==n){
            return;
        }

        sum(arr,n,index+1,target,temp,ans);
        temp.push_back(arr[index]);
        sum(arr,n,index,target-arr[index],temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
       vector<vector<int>>ans;
        int n=candidates.size();
        sum(candidates,n,0,target,temp,ans);
        return ans;
    }
};