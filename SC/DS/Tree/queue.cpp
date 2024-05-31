#include "function.h"
//代头结点的队列
void InitQueue(LinkQueue &Q)
{
    Q.front=Q.rear=(LinkNode*)malloc(sizeof(LinkNode));
    Q.front->next=NULL;
}

bool IsEmpty(LinkQueue Q)
{
    if(Q.front==Q.rear)
        return true;
    else
        return false;
}

void EnQueue(LinkQueue &Q,ElemType x)
{
    LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
    s->data=x;s->next=NULL;
    Q.rear->next=s;
    Q.rear=s;
}

bool DeQueue(LinkQueue &Q,ElemType &x)
{
    if(Q.front==Q.rear) return false;
    LinkNode *p=Q.front->next;//头结点什么都没存，所以头结点的下一个节点才有数据
    x=p->data;
    Q.front->next=p->next;
    if(Q.rear==p)
        Q.rear=Q.front;
    free(p);
    return true;
}