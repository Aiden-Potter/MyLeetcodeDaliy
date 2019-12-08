#include <iostream>

using namespace std;
int firstUniqChar1(string s) {
         vector<int> v;
        v.resize(26,0);
        for(int i = 0; i< s.length(); ++i)           //0-25代表字母 见到一个字母就+1
        {
            v[s[i]-'a']++;
        }

        for(int i =0; i <s.length();++i)            //遍历原字符串，找到词频只有一次的就直接返回i
        {
            if(v[s[i]-'a'] == 1)
            {
                return i;
            }
        }
        return -1;

}
//! 开一个字母桶，遍历一遍字符串把东西放进去，计数
//! 再遍历一遍找词频为1的
int firstUniqChar2(string s) {
        if(s.empty()) return -1;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();++i){
            ++m[s[i]];
        }
        for(int i=0;i<s.size();++i){
            if(m[s[i]]==1)
                return i;
        }
        return -1;

    }
    //! 用哈希表的方法
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
