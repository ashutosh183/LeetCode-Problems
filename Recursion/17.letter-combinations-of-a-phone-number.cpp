/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    void printAllCombinations(char tmp[], string &digits, vector<vector<char>>&digitmap, int i)
    {
        if(digits[i] == '\0')
        {
            string answer="";

            for (int k = 0; k < digits.size(); k++)

                answer += tmp[k];

            res.push_back(answer);

            return;
        }
        
        for(int j=0; j<digitmap[digits[i]-'2'].size(); ++j)
        {
            tmp[i] = digitmap[digits[i] - '2'][j];
            printAllCombinations(tmp, digits, digitmap,  i+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        char tmp[digits.size()+1];
        vector<vector<char>>digitmap;
        digitmap.push_back({'a', 'b', 'c'});
        digitmap.push_back({'d', 'e', 'f'});
        digitmap.push_back({'g', 'h', 'i'});
        digitmap.push_back({'j', 'k', 'l'});
        digitmap.push_back({'m', 'n', 'o'});
        digitmap.push_back({'p', 'q', 'r', 's'});
        digitmap.push_back({'t', 'u', 'v'});
        digitmap.push_back({'w', 'x', 'y', 'z'});
        if(digits.size() == 0)
            return res;
        printAllCombinations(tmp, digits, digitmap, 0);
        return res;
    }
};
// @lc code=end

