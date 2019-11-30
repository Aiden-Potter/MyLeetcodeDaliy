#include <iostream>
#include <vector>
using namespace std;
	void rotate(vector<int>& nums, int k) {
        int i;
        while(k>0){
            int tmp = nums[nums.size()-1];
            for(int i =nums.size()-2;i>=0;--i)
            {
                nums[i+1] = nums[i];
            }
            nums[0] = tmp;
            --k;
        }
    }
    //! 翻转数组法         右移->分开的翻转
    void rotate(vector<int>& nums, int k) {
         k %= nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
int main()
{
   vector<int> nums = {1,2,3,4,5,6,7};
   rotate(nums,3);
   for (auto a : nums)
	cout<<a<<" ";
    return 0;
}
