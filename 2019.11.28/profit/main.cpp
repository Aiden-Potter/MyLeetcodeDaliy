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
};
int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    Solution s;
    int maxprofit = s.maxProfit(nums);
    cout<<maxprofit;
    return 0;
}
