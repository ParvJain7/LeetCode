    class Solution {
    public:
        void permut(vector<int>& arr,int m ,int index, vector<vector<int>>& ans) {
        if(index==m){
            ans.push_back(arr);
            return;
        }
        vector<bool>use(21,0);
            for(int i=index;i<arr.size();i++){
                if(use[arr[i]+10]==0){
                    swap(arr[i],arr[index]);
                    permut(arr,m,index+1,ans);
                    swap(arr[i],arr[index]);
                    use[arr[i]+10]=1;
                }
            }
    }
        vector<vector<int>> permuteUnique(vector<int>& nums) {
            int m=nums.size();
            vector<vector<int>>ans;
            permut(nums,m,0,ans);
            return ans;
        }
    };