#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
	vector<int> dp(nums.size());
	dp[0] = nums[0];
	int res = dp[0];
	for (int i = 1; i < nums.size(); i++) {
		dp[i] = max(dp[i-1]+nums[i], nums[i]);
		res = max(res, dp[i]);
	}
	return res;
}

int main() {
	vector<int> a{1,10,100,1000,10000,100000};
	cout << maxSubArray(a) << endl;
	return 0;
}
