#include <iostream>

using namespace std;
string countAndSay(int n) {
        std::string s = "1";

        for (int i = 1; i < n; i++) {
            std::string tmp;
            for (int j = 0; j < s.size(); j++) {
                int count = 1;
                while (j+1 < s.size() && s[j+1] == s[j]) { //ͳ���ظ�
                    count++;
                    j++;
                }
                tmp += std::to_string(count) + s[j];
            }
            s = tmp; //�����ַ���
        }
        return s;
    }

int main()
{
	std::string s;

	cout<<countAndSay(10)<<endl;
    return 0;
}
