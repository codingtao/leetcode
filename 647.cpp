#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    // 初始想法
    // bool isPalindromic(string s,int start,int end){
    //     if(start == end) return true;
    //     string tmp1 = s.substr(start,end-start+1);
    //     string tmp2 = tmp1;
    //     reverse(tmp2.begin(),tmp2.end());     
    //     return (tmp1 == tmp2);
    // }

    // int countSubstrings(string s) {
    //     int len = s.length();
    //     int cnt = 0;
    //     for(int i=0;i<len;i++){
    //         for(int j=i;j<len;j++){
    //             if(isPalindromic(s,i,j)){
    //                  cnt++;
    //             }
    //         }
    //     }
    //     return cnt;
    // }

    // 改进后
    int countPalindromic(string s,int start,int end){
        int cnt = 0;
        while(start>=0 && end<s.length() && s[start] == s[end]){
            cnt++;
            start--;
            end++;
        }
        return cnt;
    }

    int countSubstrings(string s){
        int len = s.length();
        int cnt = 0;
        for(int i=0;i<len;i++){
            // (s,i,i)for odd length
            // (s,i-1,i)for even length 
            cnt += countPalindromic(s,i,i) + countPalindromic(s,i-1,i);
        }
        return cnt;
    }
};

int main(){
    Solution sol;
    string s = "aaa";
    cout<<sol.countSubstrings(s)<<endl;
}