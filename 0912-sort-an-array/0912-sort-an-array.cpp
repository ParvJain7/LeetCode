        class Solution {
        public:
            void merge(vector<int>&arr,int start , int end, int mid){
                vector<int>temp(end-start+1);
                    int i=start,j=mid+1,index=0;
                    while(i<=mid && j<=end){
                        if(arr[i]<=arr[j]){
                            temp[index]=arr[i];
                            index++,i++;
                        }
                        else{
                            temp[index]=arr[j];
                            index++,j++;
                        }
                    }
                    while(i<=mid){
                        temp[index]=arr[i];
                        index++,i++;
                    }
                    while(j<=end){
                        temp[index]=arr[j];
                            index++,j++;
                    }
                    index=0;
                    while(start<=end){
                        arr[start]=temp[index];
                        start++,index++;
                    }
            }

            void mergesort(vector<int>& arr, int start, int end){
                if(start==end)
                return;
                int mid=start+(end-start)/2;
                mergesort(arr,start,mid);
                mergesort(arr,mid+1,end);
                merge(arr,start,end,mid);
            }
            vector<int> sortArray(vector<int>& nums) {
            mergesort(nums,0,nums.size()-1);
        return nums;
            }
        };