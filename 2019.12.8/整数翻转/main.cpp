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
//! 转成字符串然后交换，leetcode没有itoa。。。

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
//! 用取模运算并且规避溢出结果

int reverse(int x) {
        if(x/10 == 0) return x; //平凡情况：若x∈[-9,9]，则直接返回其本身
        long y = 0;
        while(x) {
            y *= 10;
            if(y > INT_MAX || y < INT_MIN)
                return 0; //溢出
            y += x % 10;  //取出x的个位，存入y中对称的位置
            x /= 10;      //去掉x的个位
        }
        return y;
    }
//! 上面的简易写法
int main()
{
   cout<<reverse(-2342);

    return 0;
}
