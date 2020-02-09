#include <iostream>
#include <string>
#include<sstream>
using namespace std;
int myAtoi1(string str) {
            int total,begin,i,num =0;
            for(i =0;i<str.length();++i)
            {
                if(str[i]!='\0')
                {
                    begin = i;
                    break;
                }
            }
            if((!isdigit(str[begin]))&&str[begin]!='-'&&str[begin]!='+')
            {
                return 0;
            }
            for(i =begin;i<str.size();++i)
            {
                if(!isdigit(str[i]))
                {
                    break;
                }else num++;

            }

            string newStr = str.substr(begin,num);
            for(i =num-1;i>0;--i)
               {
                   total += newStr[i-1]*10^(num-i-1);
               }
            if(newStr[0] =='-'){
                   total *= -1;
               }else if(isdigit(newStr[0])){
                   total+=newStr[0]*10^(num-1);
               }
               return total;
    }

int myAtoi2(string str) {
        while(*str.begin() == ' ') str.erase(str.begin());
        if(str == "") return 0;
        stringstream ss;
        ss<<str;
        int n;
        ss>>n;
        return n;
    }
int myAtoi3(string str) {
        int res = 0;
        int i = 0;
        int flag = 1;
        // 1. 检查空格
        while (str[i] == ' ') { i++; }
        // 2. 检查符号
        if (str[i] == '-') { flag = -1; }
        if (str[i] == '+' || str[i] == '-') { i++; }
        // 3. 计算数字
        while (i < str.size() && isdigit(str[i])) {
            int r = str[i] - '0';
            // ------ 4. 处理溢出，这是关键步骤 ------
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && r > 7)) {
                return flag > 0 ? INT_MAX : INT_MIN;
            }
            // ------------------------------------
            res = res * 10 + r;
            i++;
        }
        return flag > 0 ? res : -res;
    }

int main()
{

    cout << myAtoi2("        -37d") << endl;
    return 0;
}
