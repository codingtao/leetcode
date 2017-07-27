/*
本来想用bitset
bitset要求　bitset<n> ｎ是常数
*/


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0; 
        while(n){
            cnt += n&1;
            n=n>>1;
        }
        return cnt;
    }
};