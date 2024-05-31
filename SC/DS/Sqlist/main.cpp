#include <stdio.h>

#define Maxsize 50
typedef int Elem;
typedef struct {
	Elem data[Maxsize];
	int len;
} Sqlist;

bool Insert(Sqlist &L, int i, Elem e) {
	if (i < 1 || i > L.len + 1) {
		return false;
	}
	if (i == Maxsize) {
		return false;
	}
	for (int j = L.len; j >= i; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.len++;
	return true;
}

bool Delete(Sqlist &L, int i, Elem &e) {
	if (i < 1 || i > L.len) {
		return false;
	}
	if (i == 0){
		return false;
	}
	e = L.data[i-1];
	for (int j = i; j < L.len; j++) {
		L.data[j-1] = L.data[j];
	}
	L.len--;
	return true;
}
void Print(Sqlist &L){
	for (int i = 0; i < L.len; i++) {
		printf("%3d",L.data[i]);
	}
	printf("\n");
}
int LocateElem(Sqlist &L,Elem e) {
	for (int i = 0; i < L.len; i++) {
		if(L.data[i] == e){
			return i+1;
		}
	}
	return 0;
}

int main() {
	Sqlist L;//顺序表的名称
	bool ret;//查看返回值，布尔型是True,或者False
	Elem del;//用来存要删除的元素
	//首先手动在顺序表中前三个元素赋值
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.len = 3;//总计三个元素
	ret = Insert(L, 2, 60);//往第二个位置插入60这个元素
	if (ret) {
		printf("插入成功\n");
		Print(L);//打印成功后的顺序表
	} else {
		printf("插入失败\n");
	}
	ret = Delete(L, 1, del);//删除第一个位置的元素，并把元素值输出
	if (ret) {
		printf("删除成功\n");
		printf("删除元素值为 %d\n", del);
		Print(L);
	} else {
		printf("删除失败\n");
	}
	int elem_pos;
	elem_pos = LocateElem(L, 60);
	if (elem_pos) {
		printf("查找成功\n");
		printf("元素位置为 %d\n", elem_pos);//为了打印一下元素的位置
	} else {
		printf("查找失败\n");
	}
	return 0;
}