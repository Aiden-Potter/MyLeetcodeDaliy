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
    // nums ���ԡ����á���ʽ���ݵġ�Ҳ����˵������ʵ�����κο���
	int len = s.removeDuplicates(nums);

// �ں������޸�����������ڵ������ǿɼ��ġ�
// ������ĺ������صĳ���, �����ӡ�������иó��ȷ�Χ�ڵ�����Ԫ�ء�
	for (int i = 0; i < len; i++)
	{
		cout<<nums[i];
	}


    return 0;
}
