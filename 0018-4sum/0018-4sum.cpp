class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        int n = arr.size();

        sort(arr.begin(), arr.end());

        for(int i=0;i<n-3;i++) {
            if(i > 0 && arr[i] == arr[i-1])
            continue;
            for(int j=i+1;j<n-2;j++) {
                if(j>i+1 && arr[j]==arr[j-1])
                continue;
                int s = j + 1;
                int e = n - 1;

                while(s < e) {
                    long long sum = (long long)arr[i] + arr[j] + arr[s] + arr[e];

                    if(sum == target) {
                        ans.push_back({arr[i], arr[j], arr[s], arr[e]});
                        s++;
                        e--;
                        while(s<e &&arr[s]==arr[s-1])
                        s++;
                        while(s < e && arr[e] == arr[e+1])
                            e--;
                    }
                    else if(sum < target) {
                        s++;
                    }
                    else {
                        e--;
                    }
                }
            }
        }
        return ans;
    }
};