#include <iostream>

using namespace std;
int firstUniqChar1(string s) {
         vector<int> v;
        v.resize(26,0);
        for(int i = 0; i< s.length(); ++i)           //0-25������ĸ ����һ����ĸ��+1
        {
            v[s[i]-'a']++;
        }

        for(int i =0; i <s.length();++i)            //����ԭ�ַ������ҵ���Ƶֻ��һ�εľ�ֱ�ӷ���i
        {
            if(v[s[i]-'a'] == 1)
            {
                return i;
            }
        }
        return -1;

}
//! ��һ����ĸͰ������һ���ַ����Ѷ����Ž�ȥ������
//! �ٱ���һ���Ҵ�ƵΪ1��
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
    //! �ù�ϣ��ķ���
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
