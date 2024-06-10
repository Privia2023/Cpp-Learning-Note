#include "Solution.h"

int Solution::binarySearch(vector<int> &nums, int target)
{
	int left = 0, right = nums.size() - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1; // target not found
}

int Solution::removeElement(vector<int> &nums, int val)
{
	int slowIndex = 0;
	for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
	{
		if (val != nums[fastIndex])
		{
			nums[slowIndex++] = nums[fastIndex];
		}
	}
	return slowIndex;
}

vector<int> Solution::sortedSquares(vector<int> &A)
{
	int k = A.size() - 1;
	vector<int> result(A.size(), 0);
	for (int i = 0, j = A.size() - 1; i <= j;)
	{
		if (A[i] * A[i] < A[j] * A[j])
		{
			result[k--] = A[j] * A[j];
			j--;
		}
		else
		{
			result[k--] = A[i] * A[i];
			i++;
		}
	}
	return result;
}

int Solution::minSubArrayLen(int s, vector<int> &nums)
{
	int res = INT32_MAX;
	int i = 0;
	int sum = 0;
	int subLen = 0;
	for (int j = 0; j < nums.size(); j++)
	{
		sum += nums[j];
		if (sum >= s)
		{
			subLen = (j - i - 1);
			res = res < subLen ? res : subLen;
			sum -= nums[i++];
		}
	}
	return res == INT32_MAX ? 0 : res;
}

vector<vector<int>> Solution::generateMatrix(int n)
{
	vector<vector<int>> res(n, vector<int>(n, 0));
	int startx = 0, starty = 0, i, j, loop = n / 2, mid = n / 2, count = 1, offset = 1;
	while (loop--)
	{
		j = starty;
		i = startx;
		for (j; j < n - offset; j++)
		{
			res[i][j] = count++;
		}
		for (i; i < n - offset; i++)
		{
			res[i][j] = count++;
		}
		for (; j > starty; j--)
		{
			res[i][j] = count++;
		}
		for (; i > starty; i--)
		{
			res[i][j] = count++;
		}
		starty++;
		startx++;
		offset += 1;
	}
	if (n % 2)
	{
		res[mid][mid] = count;
	}
	return res;
}
