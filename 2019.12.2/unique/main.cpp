#include <iostream>
#include <set>

#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
        multiset<int> reco;
        for(auto a : nums)
        {
		reco.insert(a);
        }
        for(auto i : reco)
	{
		if(reco.count(i) == 1)
		{
			auto a = reco.find(i);
			return *a;
		}
	}
	return -1;
    }


//! 异或的算法，一个数异或它本身等于0，一个数异或零等于他本身，异或符合交换律
int singleNumber2(vector<int>& nums) {
        int a = 0;
        for (auto i : nums)
	a ^=i ;
	return a;
}
int main()
{
	vector<int> nums = {4,1,2,1,2};

    cout << singleNumber(nums) << endl;
    return 0;
}
