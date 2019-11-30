#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

//! ��ʱ�Ĵ���
bool containsDuplicate(vector<int>& nums) {

        for(int i = 0 ; i < nums.size() ; ++i)
            for(int j = i+1; j <nums.size();++j)
                if (nums[j] == nums[i]) return true;
        return false;
    }


//! ������Ȼ�������ڵ���û���ظ���
bool cmp(const int &a,const int &b)
    {
        return a<b;
    }
bool containsDuplicate1(vector<int>& nums) {
        if(nums.size()<=1) return false;
        sort(nums.begin(),nums.end(),cmp);
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }

//! ��ϣ��Set��������һ�飬���ȥ����֮ǰ������������return true
	bool containsDuplicate2(vector<int>& nums) {
        set<int> Set(nums.begin(),nums.end());
        return Set.size()!=nums.size();
	}
    bool containsDuplicate3(vector<int>& nums) {
        map<int,int> a;
        for(int i=0;i<nums.size();i++)
        {
            if(a.count(nums[i]))
                return true;
            else a.insert(map<int,int>::value_type(nums[i],1));
        }
        return false;
    }

int main()
{
	vector<int> nums ={1,1,1,3,3,4,3,2,4,2};
    cout<<containsDuplicate(nums);
    return 0;
}
