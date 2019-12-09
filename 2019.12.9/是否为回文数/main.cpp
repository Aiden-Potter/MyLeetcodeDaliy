#include <iostream>
#include <vector>
#include <string>
using namespace std;
//! 用两个vec去存，空间开的很大，也可以采用翻转的方式得到第二个数据
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
//! 双指针法，isalnum函数很舒服，如果他不是字母或数字则把他跳过，然后如果两个都是了则比较一下
     bool isPalindrome2(string s) {
        // 双指针
        if(s.size() <= 1) return true;
        int i = 0, j = s.size() - 1;
        while(i < j){
            while(i < j && !isalnum(s[i])) // 排除所有非字母或数字的字符
                i++;
            while(i < j && !isalnum(s[j]))
                j--;
            if(tolower(s[i++]) != tolower(s[j--])) //统一转换成小写字母再比较
                return false;
        }
        return true;

    }
int main()
{
    cout<<isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}
