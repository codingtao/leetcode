/*
该题目一开始以为vector就两部分（错）
第二次　用回溯写(time limited)
最后改为　动态规划（关键是找子问题间的联系）
*/

#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int sz = s.size();
        vector<bool>dp(sz+1,false);
        dp[0] = true; // 空字符串是可取的
        unordered_set<string> uset_str;
        for(auto it : wordDict){
            uset_str.insert(it);
        }
        
        
        for(int i=1;i<=sz;i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]){
                    string tmp = s.substr(j,i-j);
                    if(uset_str.count(tmp)){
                        dp[i]=true;
                        break;// 寻找下一个i
                    }
                }
            }
        }
        
        return dp[sz];
    }
};


int main()
{
    Solution sol;
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    cout<<sol.wordBreak(s,wordDict);
    return 0;
}

