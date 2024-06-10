#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
	int binarySearch(vector<int> &nums, int target);
	int removeElement(vector<int> &nums, int val);
	vector<int> sortedSquares(vector<int> &A);
	int minSubArrayLen(int s, vector<int> &nums);
	vector<vector<int>> generateMatrix(int n);
};

#endif // SOLUTION_H
