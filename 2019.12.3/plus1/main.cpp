#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne1(vector<int>& digits) {
        vector<int> result = digits;
        auto it = result.end() -1;
        ++(*it);
        for(;*it == 10;--it)
        {
             *it = 0;
            if(it != result.begin())
                ++*(it-1);
            else
                result.insert(it,1);

        }
	return result;
    }
//! ����һ�飬������һλ��9�ͱ��0��Ȼ��һֱѭ��������9����λ����һ��
//! ���ȫ��9����㵽���digit[0] == 0�������0Ȼ����λ��1
//! ֻ��һ��0��������
vector<int> plusOne2(vector<int>& digits) {
        for (int i = (int)digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            }
            else {
                digits[i]++;
                break;
            }
        }
        if (digits[0] == 0) {
            digits.push_back(0);
            digits[0] = 1;
        }
        return digits;

    }
int main()
{
    vector<int> nums={9};
    vector<int> tmp = plusOne1(nums);

    for(auto i: tmp)
	cout<<i<<endl;
    return 0;
}
