#include <iostream>
#include <vector>
using namespace std;
//! �ɹ��ύ�ˣ�swapһ���Ǵ�����
void moveZeroes2(vector<int>& nums) {
	for(int i = nums.size()-2;i>-1;--i)
            for(int a =i;nums[a] == 0&&a!=nums.size()-1;++a)
		{
			swap(nums[a],nums[a+1]);
		}
}
//! ֱ����ԭ�������ϸĵĴ��У�˫ָ�뷨
void moveZeroes1(vector<int>& nums) {
        int i = 0,j=0;
        for(int i =0; i< nums.size();++i)
        {
            if(nums[i]!=0)
            {
                nums[j++] = nums[i];
            }
        }
        while(j<nums.size())
        nums[j++] =0;

}
//! ˫ָ�뷨���Ż�
void moveZeroes(vector<int>& nums) {
	for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++) {
		if (nums[cur] != 0) {
			swap(nums[lastNonZeroFoundAt++], nums[cur]);
		}
	}
}

int main()
{
	vector<int> nums = {0,1,0,3,12};
	moveZeroes(nums);
	for(auto i : nums)
		cout<<i<<endl;
    return 0;
}

