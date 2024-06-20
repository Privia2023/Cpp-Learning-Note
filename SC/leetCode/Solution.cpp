#include "Solution.h"
#include <unordered_map>
#include <unordered_set>

int arraySolution::binarySearch(vector<int> &nums, int target)
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

int arraySolution::removeElement(vector<int> &nums, int val)
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

vector<int> arraySolution::sortedSquares(vector<int> &A)
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

int arraySolution::minSubArrayLen(int s, vector<int> &nums)
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

vector<vector<int>> arraySolution::generateMatrix(int n)
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

LinkListSolution::ListNode *LinkListSolution::removeElements(ListNode *head, int val)
{
	dummyhead = head->next;
	ListNode *cur = dummyhead;
	while (cur->next != NULL)
	{
		if (cur->next->val == val)
		{
			ListNode *tmp = cur->next;
			cur->next = cur->next->next;
			delete tmp;
		}
		else
		{
			cur = cur->next;
		}
		head = dummyhead->next;
		delete dummyhead;
		return head;
	}
}

int LinkListSolution::get(int index)
{
	if (index < 0 || index >= size)
	{
		return -1;
	}
	ListNode *cur = dummyhead;
	while (index--)
	{
		cur = cur->next;
	}
	return cur->val;
}

void LinkListSolution::addAtHead(int val)
{
	ListNode *newNode = new ListNode(val);
	newNode->next = dummyhead->next;
	dummyhead->next = newNode;
	size++;
}
void LinkListSolution::addAtTail(int val)
{
	ListNode *newNode = new ListNode(val);
	ListNode *cur = dummyhead;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = newNode;
	size++;
}

void LinkListSolution::addAtIndex(int index, int val)
{
	if (index < 0)
	{
		index = 0;
	}
	if (index > size)
	{
		return;
	}
	ListNode *newNode = new ListNode(val);
	ListNode *cur = dummyhead;
	while (index--)
	{
		cur = cur->next;
	}
	newNode->next = cur->next;
	cur->next = newNode;
	size++;
}

void LinkListSolution::deleteAtIndex(int index)
{
	if (index < 0 || index >= size)
	{
		return;
	}
	ListNode *cur = dummyhead;
	while (index--)
	{
		cur = cur->next;
	}
	ListNode *tmp = cur->next;
	cur->next = cur->next->next;
	delete tmp;
	tmp = NULL;
	size--;
}

void LinkListSolution::printLinkedList()
{
	ListNode *cur = dummyhead;
	while (cur->next != NULL)
	{
		cout << cur->next->val << " ";
		cur = cur->next;
	}
	cout << endl;
}

LinkListSolution::ListNode *LinkListSolution::reverseList(ListNode *head)
{
	ListNode *tmp;
	ListNode *cur = head;
	ListNode *pre;
	while (cur)
	{
		tmp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = tmp;
	}
	return pre;
}

LinkListSolution::ListNode *LinkListSolution::swapPairs(ListNode *head)
{
	ListNode *_dummyhead = new ListNode(0);
	_dummyhead->next = head;
	ListNode *cur = _dummyhead;
	while (cur->next != NULL && cur->next->next != NULL)
	{
		ListNode *tmp = cur->next;
		ListNode *tmp1 = cur->next->next->next;
		cur->next = cur->next->next;
		cur->next->next = tmp;
		cur->next->next->next = tmp1;
		cur = cur->next->next;
	}
	ListNode *result = _dummyhead->next;
	delete _dummyhead;
	return result;
}

LinkListSolution::ListNode *LinkListSolution::removeNthFromEnd(ListNode *head, int n)
{
	ListNode *_dummuyhead = new ListNode(0);
	_dummuyhead->next = head;
	ListNode *fast = _dummuyhead;
	ListNode *slow = _dummuyhead;
	while (n-- && fast != NULL)
	{
		fast = fast->next;
	}
	fast = fast->next;
	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = slow->next->next;
	return _dummuyhead->next;
}

LinkListSolution::ListNode *LinkListSolution::getIntersectionNode(ListNode *headA, ListNode *headB)
{
	ListNode *curA = headA;
	ListNode *curB = headB;
	int lena = 0, lenb = 0;
	while (curA->next)
	{
		lena++;
		curA = curA->next;
	}
	while (curB->next)
	{
		lenb++;
		curB = curA->next;
	}
	curA = headA;
	curB = headB;
	if (lenb > lena)
	{
		swap(lena, lenb);
		swap(curA, curB);
	}
	int gap = lena - lenb;
	while (gap--)
	{
		curA = curA->next;
	}
	while (curA->next)
	{
		if (curA == curB)
		{
			return curA;
		}
		curA = curA->next;
		curB = curB->next;
	}
	return NULL;
}

LinkListSolution::ListNode *LinkListSolution::detectCycle(ListNode *head)
{
	ListNode *slow = head;
	ListNode *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			ListNode *index1 = fast;
			ListNode *index2 = head;
			while (index1 != index2)
			{
				index1 = index1->next;
				index2 = index2->next;
			}
			return index2;
		}
	}
	return NULL;
}

bool HashSolution::isAnagram(string s, string t)
{
	int record[26] = {0};
	for (int i = 0; i < s.size(); i++)
	{
		record[s[i] - 'a']++;
	}
	for (int i = 0; i < t.size(); i++)
	{
		record[t[i] - 'a']--;
	}
	for (int i = 0; i < 26; i++)
	{
		if (record[i] != 0)
		{
			return false;
		}
	}
	return true;
}

vector<int> HashSolution::intersection(vector<int> &nums1, vector<int> &nums2)
{
	unordered_set<int> res;
	unordered_set<int> _nums1;
	for (int num : nums2)
	{
		if (_nums1.find(num) != _nums1.end())
		{
			res.insert(num);
		}
	}
	return vector<int>(res.begin(), res.end());
}
int HashSolution::getSum(int n)
{
	int sum = 0;
	while (n)
	{
		sum += (n % 10) * (n % 10);
		n /= 10;
	}
	return sum;
}
bool HashSolution::isHappy(int n)
{
	unordered_set<int> set;
	while (1)
	{
		int sum = getSum(n);
		if (sum == 1)
		{
			return true;
		}
		if (set.find(sum) != set.end())
		{
			return false;
		}
		else
		{
			set.insert(sum);
		}
		n = sum;
	}
}
vector<int> HashSolution::twoSum(vector<int> &nums, int target)
{
	unordered_map<int, int> map;
	for (int i = 0; i < nums.size(); i++)
	{
		auto iter = map.find(target - nums[i]);
		if (iter != map.end())
		{
			return {iter->second, i};
		}
		map.insert(pair<int, int>(nums[i], i));
	}
	return {};
}

int HashSolution::fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D)
{
	unordered_map<int, int> map;
	for (int a : A)
	{
		for (int b : B)
		{
			map[a + b]++;
		}
	}
	int count = 0;
	for (int c : C)
	{
		for (int d : D)
		{
			if (map.find(0 - (c + d)) != map.end())
			{
				count += map[0 - (c + d)];
			}
		}
	}
	return count;
}
bool HashSolution::canConstruct(string ransomNote, string magazine)
{
	int record[26] = {0};
	if (ransomNote.size() > magazine.size())
	{
		return false;
	}
	for (int i = 0; i < ransomNote.size(); i++)
	{
		record[ransomNote[i] - 'a']++;
	}
	for (int i = 0; i < magazine.size(); i++)
	{
		record[magazine[i] - 'a']--;
		if (record[ransomNote[i] - 'a'] < 0)
		{
			return false;
		}
	}
	return true;
}