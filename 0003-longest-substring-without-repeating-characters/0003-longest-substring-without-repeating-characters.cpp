class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /* brute force
        int maxlength=0;
        for(int i=0;i<s.size();i++)
        {
           int hash[255]={0};
            for(int j=i;j<s.size();j++)
             { if(hash[s[j]]==1)
                 break;
              int length=j-i+1;
              maxlength=max(length,maxlength);
              hash[s[j]]=1;
             }
        }
        return maxlength;*/
        int l=0,r=0,maxlength=0;
        int n=s.size();
        int hash[256];
      for(int i=0;i<256;i++)
          hash[i]=-1;
        while(r<n)
        {
            if(hash[s[r]]!=-1)
               {
                 if(hash[s[r]]>=l)
                    l=hash[s[r]]+1;
                }
            int length=r-l+1;
            maxlength=max(length,maxlength);
            hash[s[r]]=r;
            r++;
        }
        return maxlength;
    }
};