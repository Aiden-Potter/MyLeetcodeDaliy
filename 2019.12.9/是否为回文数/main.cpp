#include <iostream>
#include <vector>
#include <string>
using namespace std;
//! ������vecȥ�棬�ռ俪�ĺܴ�Ҳ���Բ��÷�ת�ķ�ʽ�õ��ڶ�������
bool isPalindrome(string s) {
        vector<char> vc1,vc2;
        for(auto a:s)
        {
            if(a>64&&a<91)
            {
                vc1.push_back(a+32);
                continue;
            }
            if(a>96&&a<123)
            {
                vc1.push_back(a);
                continue;
            }
            if(a>47&&a<58)
                vc1.push_back(a);

        }
        for(int i=s.size()-1;i>=0;--i)
        {
            if(s[i]>64&&s[i]<91){
                vc2.push_back(s[i]+32);
                continue;
            }

            if(s[i]>96&&s[i]<123)
            {
               vc2.push_back(s[i]);
                continue;
            }
            if(s[i]>47&&s[i]<58)
                vc2.push_back(s[i]);

        }
        return vc1==vc2;
    }
//! ˫ָ�뷨��isalnum����������������������ĸ�����������������Ȼ�����������������Ƚ�һ��
     bool isPalindrome2(string s) {
        // ˫ָ��
        if(s.size() <= 1) return true;
        int i = 0, j = s.size() - 1;
        while(i < j){
            while(i < j && !isalnum(s[i])) // �ų����з���ĸ�����ֵ��ַ�
                i++;
            while(i < j && !isalnum(s[j]))
                j--;
            if(tolower(s[i++]) != tolower(s[j--])) //ͳһת����Сд��ĸ�ٱȽ�
                return false;
        }
        return true;

    }
int main()
{
    cout<<isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}
