#include <iostream>

using namespace std;


class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        while(x||y){
            cnt =cnt + ((x&1)^(y&1));
            x=x>>1;
            y=y>>1;
        }
        return cnt;
    }
};

int main()
{
    Solution sol;
    cout<<sol.hammingDistance(3,1)<<endl;
    return 0;
}