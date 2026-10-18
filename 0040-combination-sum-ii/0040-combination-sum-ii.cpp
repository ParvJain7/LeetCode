class Solution {
public:
    void parv(vector<int>&arr,int n,int index ,int target, vector<vector<int>>&ans,vector<int>&temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(index==n || target<0)
        return;

        temp.push_back(arr[index]);
        parv(arr,n,index+1,target-arr[index],ans,temp);
        temp.pop_back();

        int i=index+1;
        while (i<n && arr[i]==arr[index])
            i++;
        parv(arr,n,i,target,ans,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;
        parv(candidates,n,0,target,ans,temp);
        return ans;
    }
};