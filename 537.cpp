/*
这道题是靠转换的
string 转int
利用　stringstream
类似 "+123" "-123"都可以转
类似 "+-123"　无法正确转
可以用一个char 来接受一个"+"　就可以转了
如　： stringstream ss("-+123")
        char buff
        int n
        ss>>buff>>n
*/



#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int ra,ia,rb,ib;
        stringstream aa(a),bb(b);
        char buff;
        
        aa>>ra>>buff>>ia;
        bb>>rb>>buff>>ib;

        cout<<ra<<endl;
        cout<<ia<<endl;
        
        cout<<rb<<endl;
        cout<<ib<<endl;
        
        
        int rres = ra*rb - ia*ib;
        int ires = ra*ib + rb*ia;
        
        cout<<rres<<endl;
        cout<<ires<<endl;
        
        return to_string(rres)+"+"+to_string(ires)+"i"; 
    }
};
int main(){

    string a = "78+-76i";
    string b = "-86+72i";


    stringstream ss("-+123");
    char buff;
    int n;
    ss>>buff>>n;
    cout<<"n="<<n<<endl;

    Solution sol;
    cout<<sol.complexNumberMultiply(a,b)<<endl;
    return 0;
}