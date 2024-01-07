//121. Best Time to Buy and Sell Stock
#include <iostream>
#include <vector>
using namespace std;

class Solution{
	public:
	int maxProfit(vector<int>& prices){
		int left = 0;
		int right = 1;
		int maxprofit = 0;
		while(right < prices.size()){
			if(prices[right]>prices[left]){
				int profit = prices[right]-prices[left];
				maxprofit = max(maxprofit, profit);
			}else{
				left = right;
			}
			right++;
		}
		cout << "Bought at: " << left <<endl;
		cout << "Sold at: "<< right <<endl;
		cout << "Maximum profit" << maxprofit <<endl;
		return maxprofit;
	}
};
int main(){
	Solution sol;
	vector<int> prices = {7,8,1,3,5,1,9};
	sol.maxProfit(prices);
	return 0;
}
