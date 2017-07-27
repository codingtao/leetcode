/*
这道题主要是读题
其实照着题目要求写　还是蛮简单的
*/


class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if(board.empty()||board[0].empty())  return 0;
        
        int r = board.size();
        int c = board[0].size();
        
        int cnt = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cnt  = cnt + (board[i][j]=='X'&&(i==0||board[i-1][j]!='X')&&(j==0||board[i][j-1]!='X'));
            }
        }
        return cnt;
    }
};