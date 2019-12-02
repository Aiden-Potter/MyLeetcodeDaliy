#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	vector<int> ln,sn;//long num ,short num
	vector<int> result;
	if(nums1.size()>nums2.size())
	{
		ln = nums1;
		sn = nums2;
	}else{
		ln = nums2;
		sn = nums1;
	}
	for(int i =0;i<sn.size();++i)
	{
		if(find(ln.begin(),ln.end(),sn[i]) != ln.end())
			result.push_back(sn[i]);
	}
	return result;
}
//! ���ٷ�˵�����ɣ�������

//! ������ת����û���ظ���set��unordered set
vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> u;
        vector<int> answer;
        for(int i:nums1)
            u.insert(i);
        for(int i:nums2){
            auto a = u.find(i);
            if(a!=u.end()){
                answer.push_back(i);
                u.erase(a);
            }
        }
        return answer;
};
vector<int> intersect3(vector<int>& nums1, vector<int>& nums2) {
	vector<int> ln,sn;//long num ,short num
        vector<int> result;
        if(nums1.size()>nums2.size())
        {
            ln = nums1;
            sn = nums2;
        }else{
            ln = nums2;
            sn = nums1;
        }
        for(int i =0;i<sn.size();++i)
        {
            int co;
            if((co = count(ln.begin(),ln.end(),sn[i])) != 0)
                for(;co>0;--co){
                    result.push_back(sn[i]);
                    auto it = find( sn.begin(), sn.end(), sn[i] );
                    sn.erase(it);
                }

        }
        return result;
    }
int main()
{

	vector<int> n1 = {1,2,2,1},n2={2,2};
	vector<int> a= intersect3(n1,n2);
	for(auto i : a)
		cout<<i<<endl;
    return 0;
}
