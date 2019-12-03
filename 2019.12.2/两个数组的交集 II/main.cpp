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
//! 被官方说我幼稚，气死了

//! 把数组转换成没有重复的set，unordered set
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

//要求不一样，

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	vector<int>rec;
        unordered_map<int,int>map;
        for(int i =0;i<nums1.size();i++)
            map[nums1[i]]+=1;
        for(int i =0;i<nums2.size();i++)
           if(map[nums2[i]]>0)
           {
               rec.push_back(nums2[i]);
               map[nums2[i]]-=1;
           }

        return rec;

    }
int main()
{

	vector<int> n1 = {1,2,2,1},n2={2,2};
	vector<int> a= intersect3(n1,n2);
	for(auto i : a)
		cout<<i<<endl;
    return 0;
}
