class Solution {
public:
    void setZeroes(vector<vector<int>>& mtr) {
        set<int>c;
        set<int>r;
        for(int i=0;i<mtr.size();i++)
        {
            for(int j=0;j<mtr[0].size();j++)
            {
                if(mtr[i][j]==0)
                {
                    c.insert(i);
                    r.insert(j);
                }
            }
        }
        for(int i=0;i<mtr.size();i++)
        {
            for(int j=0;j<mtr[0].size();j++)
            {
                if(r.find(j)!=r.end())
                {
                    mtr[i][j]=0;
                }
                if(c.find(i)!=c.end())
                {
                    mtr[i][j]=0;
                }
            }
        }
      
    }
};