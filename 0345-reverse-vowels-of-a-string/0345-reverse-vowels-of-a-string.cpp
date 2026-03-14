class Solution {
public:
    string reverseVowels(string s) {
       string ans=s;
        int i=0;
        int j=s.size()-1;
        string vowels="AEIOUaieou";
        
   while(i<=j) 
   { 
    while( i<j && vowels.find(ans[i])==string::npos)
     {   i++;
    }
     while( i<j && vowels.find(ans[j])==string::npos)
     {
        j--;
      }
    swap(ans[i],ans[j]);
    i++;
    j--;
   } 
   return ans;
   }          
};