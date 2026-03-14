
       class Solution {
     private: bool isVowel(char c)
       {
        return string("AEIOUaeiou").find(c)!=string::npos;
       }
public:
    string sortVowels(string s) {
        vector<char> v;
        for (int i = 0; i <s.size(); i++)
            if (isVowel(s[i]))
                v.push_back(s[i]);

        sort(v.begin(), v.end());
        int vindx = 0;
        for (int i = 0; i <s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = v[vindx++];
            }
        }
        return s;
    }
};