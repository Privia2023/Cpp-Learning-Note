#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <assert.h>
using namespace std;

class arraySolution
{
public:
	int binarySearch(vector<int>& nums, int target);
	int removeElement(vector<int>& nums, int val);
	vector<int> sortedSquares(vector<int>& A);
	int minSubArrayLen(int s, vector<int>& nums);
	vector<vector<int>> generateMatrix(int n);
};

class LinkListSolution
{
public:
	int size;
	struct ListNode
	{
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};
	LinkListSolution()
	{
		dummyhead = new ListNode(0);
		size = 0;
	}
	ListNode* removeElements(ListNode* head, int val);

	int get(int index);
	void addAtHead(int val);
	void addAtTail(int val);
	void addAtIndex(int index, int val);
	void deleteAtIndex(int index);
	void printLinkedList();

	ListNode* reverseList(ListNode* head);

	ListNode* swapPairs(ListNode* head);

	ListNode* removeNthFromEnd(ListNode* head, int n);

	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB);

	ListNode* detectCycle(ListNode* head);

private:
	ListNode* dummyhead;
};

class HashSolution
{
private:
public:
	bool isAnagram(string s, string t);
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
	int getSum(int n);
	bool isHappy(int n);
	vector<int> twoSum(vector<int>& nums, int target);
	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D);
	bool canConstruct(string ransomNote, string magazine);
	vector<vector<int>> threeSum(vector<int>& nums);
	vector<vector<int>> fourSum(vector<int>& nums, int target);
};

#endif // SOLUTION_H
