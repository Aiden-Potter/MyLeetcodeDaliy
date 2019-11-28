#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	/*
    int maxProfit(vector<int>& prices) {
        int maxPrice=0;
        int money =0;
        if(prices.size() < 2) return 0;
        for(int i =1 ; i<prices.size();++i)
        {
            for(int j =0;j<i;++j)
            {
                money = prices[i] - prices[j];
                if(money>maxPrice)
                maxPrice = money;
            }
        }
        return maxPrice;
    }
    */
    //! 遍历一遍，找最大利润，我们需要找到最小的谷之后的最大的峰
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
};
int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    Solution s;
    int maxprofit = s.maxProfit(nums);
    cout<<maxprofit;
    return 0;
}
