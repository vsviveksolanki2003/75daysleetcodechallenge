class Solution {
private:
    void solve(string& digits, string output, int indx,
               vector<string>& ans,string mapping[]) { // base case
        if (indx >= digits.size()) {
            ans.push_back(output);
            return;
        }

        int number = digits[indx] - '0';
        string value = mapping[number];
        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digits, output, indx + 1, ans,mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        if (digits.size() == 0)
            return ans;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, 0, ans,mapping);
        return ans;
    }
};