#include "Solution.h"

using namespace std;

void arraysolu()
{
	arraySolution solu;
	vector<int> nums = {10,
						2,
						3,
						1,
						7,
						4,
						5,
						6,
						9,
						8};

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

int main()
{
	// arraysolu();

	linklistsolu();
	return 0;
}