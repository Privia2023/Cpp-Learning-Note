```c++
#include <stdio.h>

//其中swap为交换一个数组中下标为i和j的函数；
void Swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void QuickSort(int v[], int left, int right) {
    int i, pos;
    if (left >= right)
        return;
    //取第一个元素为锚定点
    pos = left;
    //遍历数组，将小于锚定点的数swap到数组前部
    for (i = left + 1; i <= right; ++i) {
        if (v[i] < v[left])
            Swap(v, i, ++pos);
    }
    //将锚定点的数与swap至其正确位置pos;
    Swap(v, left, pos);
    //递归该过程
    QuickSort(v, left, pos - 1);
    QuickSort(v, pos + 1, right);
}

int main() {
    int arr[10] = {7, 1, 3, 9, 2, 6, 1, 7, 3, 5};
    int len = sizeof(arr) / sizeof(int);
    QuickSort(arr, 0, 9);
    for (int i = 0; i < len; ++i) {
        printf("%2d",arr[i]);
    }
    return 0;
}
```