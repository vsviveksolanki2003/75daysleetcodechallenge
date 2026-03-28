class Solution {
public:
    int characterReplacement(string s, int k) {
          int l=0,maxFreq=0,changes=0;
        int hash[26]={0};
        int maxLen=0;
        for(int r=0;r<s.length();r++){
            hash[s[r]-'A']++;
            maxFreq=max(maxFreq,hash[s[r]-'A']);
            int changes=(r-l+1)-maxFreq;
            if(changes<=k){
                maxLen=max(maxLen,r-l+1);
            }
            else{
                hash[s[l]-'A']--;
                l++;
            }
        }
        return maxLen;
    }
};