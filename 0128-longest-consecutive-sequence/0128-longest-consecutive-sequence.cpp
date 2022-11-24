class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans=0,cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            cout<<nums[i]-nums[i-1]<<" ";
            if(nums[i]-nums[i-1]==1)
            {
                cnt+=1;
            }
            else if(nums[i]-nums[i-1]==0)
            {
                continue;
            }
            else
            {
                ans=max(ans,cnt);
                cnt=1;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};