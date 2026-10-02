class Solution {
public:
    int reverse(int x) {
        long long ans=0,rem=0;
        while(x!=0){
            rem=x%10;
            ans=(ans*10)+rem;
            x=x/10;
        }
        if(ans>INT_MAX || ans<INT_MIN)
        return 0;
        return ans;
    }
};