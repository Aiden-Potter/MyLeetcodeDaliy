#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(auto it = nums.begin();it < nums.end()-1;)
        {
            int last = *(it);
            int next = *(it+1);
            if(last == next) {
              it = nums.erase(it+1) - 1;
            }else{
                ++it;
            }
        }
        return nums.size();
    }
};
int main()
{
	vector<int> nums = {1,1,2};
	nums = {0,0,1,1,1,2,2,3,3,4};
	//nums = {1};
	Solution s;
    // nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
	int len = s.removeDuplicates(nums);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中该长度范围内的所有元素。
	for (int i = 0; i < len; i++)
	{
		cout<<nums[i];
	}


    return 0;
}
