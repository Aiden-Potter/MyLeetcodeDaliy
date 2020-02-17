#include <iostream>

using namespace std;
//! 我为数不多的通过
string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.size() ==0)
        {
            return res;
        }
        for(int i=0;i<strs[0].size();++i){
            char tmp = strs[0][i];
            for(int j =1;j<strs.size();++j)
            {
                if(i<strs[j].size()&&tmp==strs[j][i])
                {
                    //ojbk
                }else{
                    return res;
                }

            }
            res+=strs[0][i];
        }
        return res;

    }
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
