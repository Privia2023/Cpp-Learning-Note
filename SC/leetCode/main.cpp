#include "Solution.h"

using namespace std;

void arraysolu()
{
	arraySolution solu;
	vector<int> nums = { 10,
						2,
						3,
						1,
						7,
						4,
						5,
						6,
						9,
						8 };

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

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
		// cout << ss[i] << " ";
	}
	cout << endl;
}

void linklistsolu()
{
	LinkListSolution list;

	// Add elements to the linked list
	list.addAtHead(1);
	list.addAtTail(3);
	list.addAtIndex(1, 2); // linked list becomes 1->2->3
	list.printLinkedList();

	// Get element at index 1
	std::cout << "Element at index 1: " << list.get(1) << std::endl;

	// Delete element at index 1
	list.deleteAtIndex(1); // now the linked list is 1->3
	list.printLinkedList();

	// Try to get element at index 1 again
	std::cout << "Element at index 1 after deletion: " << list.get(1) << std::endl;
}

void hashSolu() {
	HashSolution solution;

	// Test isAnagram
	cout << "Testing isAnagram..." << endl;
	assert(solution.isAnagram("anagram", "nagaram") && "Test case 1 failed!"); // should return true
	assert(!solution.isAnagram("rat", "car") && "Test case 2 failed!"); // should return false

	// Test intersection
	cout << "Testing intersection..." << endl;
	vector<int> nums1 = { 1, 2, 2, 1 };
	vector<int> nums2 = { 2, 2 };
	vector<int> result1 = solution.intersection(nums1, nums2);
	assert(result1 == vector<int>{2} && "Test case 3 failed!");

	// Test isHappy
	cout << "Testing isHappy..." << endl;
	assert(solution.isHappy(19) && "Test case 6 failed!"); // should return true
	assert(!solution.isHappy(2) && "Test case 7 failed!"); // should return false

	// Test twoSum
	cout << "Testing twoSum..." << endl;
	vector<int> nums3 = { 2, 7, 11, 15 };
	vector<int> result2 = solution.twoSum(nums3, 9);
	assert((result2 == vector<int>{0, 1} || result2 == vector<int>{1, 0}) && "Test case 8 failed!");

	// Test fourSumCount
	cout << "Testing fourSumCount..." << endl;
	vector<int> A = { 1, 2 }, B = { -2, -1 }, C = { -1, 2 }, D = { 0, 2 };
	assert(solution.fourSumCount(A, B, C, D) == 2 && "Test case 9 failed!");

	// Test canConstruct
	cout << "Testing canConstruct..." << endl;
	assert(!solution.canConstruct("a", "b") && "Test case 10 failed!"); // should return false
	assert(!solution.canConstruct("aa", "ab") && "Test case 11 failed!"); // should return false
	assert(solution.canConstruct("aa", "aab") && "Test case 12 failed!"); // should return true

	// Test threeSum
	cout << "Testing threeSum..." << endl;
	vector<int> nums4 = { -1, 0, 1, 2, -1, -4 };
	vector<vector<int>> result3 = solution.threeSum(nums4);
	assert(result3.size() == 2 && "Test case 13 failed!"); // should return [[-1, -1, 2], [-1, 0, 1]]

	// Test fourSum
	cout << "Testing fourSum..." << endl;
	vector<int> nums5 = { 1, 0, -1, 0, -2, 2 };
	vector<vector<int>> result4 = solution.fourSum(nums5, 0);
	assert(result4.size() == 3 && "Test case 14 failed!"); // should return [[-1, 0, 0, 1], [-2, -1, 1, 2], [-2, 0, 0, 2]]
	cout << "done" << endl;
}

int main()
{
	// arraysolu();

	//linklistsolu();

	hashSolu();
	return 0;
}