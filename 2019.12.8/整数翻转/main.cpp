#include <iostream>
#include <string>
using namespace std;
int reverse1(int x) {

        string s;
        char buf[1024];
        itoa(x,buf,10);
        s=buf;
        if(s[0]!='-')
        {
            for(int i =0;i<s.length()/2;++i)
            {
                swap(s[i],s[s.length()-i-1]);
            }
        }else{
            for(int i =1;i<(s.length()+1)/2;++i)
            {
                swap(s[i],s[s.length()-i]);
            }
        }
        return atoi(s.c_str());
    }
//! ת���ַ���Ȼ�󽻻���leetcodeû��itoa������

    int reverse2(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
//! ��ȡģ���㲢�ҹ��������

int reverse(int x) {
        if(x/10 == 0) return x; //ƽ���������x��[-9,9]����ֱ�ӷ����䱾��
        long y = 0;
        while(x) {
            y *= 10;
            if(y > INT_MAX || y < INT_MIN)
                return 0; //���
            y += x % 10;  //ȡ��x�ĸ�λ������y�жԳƵ�λ��
            x /= 10;      //ȥ��x�ĸ�λ
        }
        return y;
    }
//! ����ļ���д��
int main()
{
   cout<<reverse(-2342);

    return 0;
}
