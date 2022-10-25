class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int min=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            min=max(sum,min);
            if(sum<0){sum=0;}
            
        }
        return min;
    }
};