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
//! 遍历一遍，如果最后一位是9就变成0，然后一直循环到不是9的那位，加一，
//! 如果全是9，则搞到最后digit[0] == 0，在最后补0然后首位置1
//! 只有一个0，则如上
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
