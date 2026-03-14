class Solution {

private:
    bool isvowel(char c) { return string("aeiou").find(c) != string ::npos; }
    bool iscon(char c) {
        return string("bcdfghjklmnpqrstvwxyz").find(c) != string ::npos;
    }

public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;
        for (auto x : s) {
            if (isvowel(x))
                v++;
            if (iscon(x))
                c++;
        }
        if (c > 0)
            return v / c;
        else
            return 0;
    }
};