#include <stdio.h>
#include <stdlib.h>
//作者 王道训练营 龙哥
typedef char BiElemType;
typedef struct BiTNode{
    BiElemType c;//c就是书籍上的data
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode,*BiTree;

typedef struct tag{
    BiTree p;//树的某一个结点的地址值
    struct tag *pnext;
}tag_t,*ptag_t;

//栈的相关数据结构
#define MaxSize 50
typedef BiTree ElemType;
typedef struct{
    ElemType data[MaxSize];
    int top;
}SqStack;
void InitStack(SqStack &S);
bool StackEmpty(SqStack &S);
bool Push(SqStack &S,ElemType x);
bool Pop(SqStack &S,ElemType &x);
bool GetTop(SqStack &S,ElemType &x);
//队列的相关数据结构
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode;
typedef struct{
    LinkNode *front,*rear;
}LinkQueue;
void InitQueue(LinkQueue &Q);
bool IsEmpty(LinkQueue Q);
void EnQueue(LinkQueue &Q,ElemType x);
bool DeQueue(LinkQueue &Q,ElemType &x);
