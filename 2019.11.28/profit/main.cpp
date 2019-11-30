#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    //! ����һ�飬���������������Ҫ�ҵ���С�Ĺ�֮������ķ�
    int maxProfit(vector<int>& prices) {
        int minprice = 0x3f3f3f3f;
        int maxprofit = 0;
        for (int i = 0; i < prices.size();++i) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i]-minprice;
        }
        return maxprofit;

    }
     int maxProfit2(vector<int> & prices)
     {
     	vector<int> profit;

	for(auto i=prices.cbegin();i!=prices.cend()-1;++i)
	{
		profit.push_back(*(i+1) - *(i));
	}
	int maxProfit=0;
	int tmpProfit=0;
	for(auto a = profit.cbegin();a!=profit.cend();++a)
	{

		if(*a >= 0)
		tmpProfit += *a;
		else
		{
			maxProfit += tmpProfit;
			tmpProfit=0;
		}
	}
	maxProfit +=tmpProfit;
	return maxProfit;
     }
	//! ���򵥵Ľⷨ


	int maxProfit3(vector<int>& prices) {
         int ans = 0;
        int price;
        for(int i = 1; i<prices.size();++i){
            price = - prices[i-1] + prices[i];
            if (price > 0)
                ans += price;
        }
        return ans;
    }
};
int main()
{
    vector<int> nums = {7,6,4,3,1};
    Solution s;
    //int maxprofit = s.maxProfit(nums);
    int maxprofit = s.maxProfit2(nums);
    cout<<maxprofit;
    return 0;
}
