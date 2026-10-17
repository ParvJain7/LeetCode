class Solution {
public:
    int targetsum(vector<int>& arr,int n,int index,int target){
        if(index==n){
            return target==0;
        }
       return targetsum(arr,n,index+1,target-arr[index])+targetsum(arr,n,index+1,target+arr[index]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return targetsum(nums,n,0,target);
    }
};