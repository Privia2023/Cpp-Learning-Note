#include "Solution.h"

using namespace std;

int main()
{
	Solution solu;
	vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// int bs = solu.binarySearch(nums, 5);
	// cout << bs << endl;

	// int re = solu.removeElement(nums, 9);
	// cout << re << endl;

	// vector<int> ss = solu.sortedSquares(nums);

	// int msl = solu.minSubArrayLen(7, nums);
	// cout << msl << endl;

	// int n = 4;
	// vector<vector<int>> gm = solu.generateMatrix(n);
	// for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		cout << gm[i][j] << " ";
	//	}
	//	cout << endl;
	// }

	for (int i = 0; i < nums.size() - 1; i++)
	{
		cout << nums[i] << " ";
		// cout << ss[i] << " ";
	}
	cout << endl;
	return 0;
}
