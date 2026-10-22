    class Solution {
    public:
        int generateKey(int num1, int num2, int num3) {
        int ans=0,rem=1;
        for(int i=0;i<4;i++){
            int a = num1%10;
            int b = num2 % 10;
            int c = num3 % 10;
            ans+= min(a,min(b,c))*rem;

            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
            rem *= 10;
            
        }
        return ans;
        }
    };