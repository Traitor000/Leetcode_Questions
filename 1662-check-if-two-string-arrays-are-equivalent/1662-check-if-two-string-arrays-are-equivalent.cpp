class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="";
        string b="";
      for(int i=0;i<word1.size();i++)
      {
          a+=word1[i];
      }
        for(int i=0;i<word2.size();i++)
      {
          b+=word2[i];
      }
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        cout<<a<<" "<<b<<" ";
        if(a==b)
        {
            return true;
        }
        return false;
    }
};