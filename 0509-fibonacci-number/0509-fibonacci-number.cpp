class Solution {
public:
    int fib(int n) {
        if(n<2)
        {
            return n;
        }
        int prev2=0;
        int prev=1;
        int ans=prev+prev2;
        int k=n-2;
        if(n>2){
            while(k--)
            {
                prev2=prev;
                prev=ans;
                ans=prev+prev2;
                cout<<ans<<prev<<prev2<<" ";
            }
        }
        return ans;
        
        
    }
};