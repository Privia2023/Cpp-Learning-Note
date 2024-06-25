#include <stdio.h>
#include <stdlib.h>

typedef int Elem;
typedef struct LNode
{
    Elem data;
    struct LNode *next;
} LNode, *LinkList;

LinkList HeadCreate(LinkList &L)
{
    LinkList s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != 9999)
    {
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

LinkList TailCreate(LinkList &L)
{
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LinkList s, r = L;
    scanf("%d", &x);
    while (x != 9999)
    {
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
}

LinkList GetElem(LinkList L, int i)
{
    int j = 1;
    LinkList p = L->next;
    if (i == 0)
    {
        return L;
    }
    if (i < 1)
    {
        return NULL;
    }
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    return p;
}

LinkList LocateElem(LinkList L, Elem e)
{
    LinkList p = L->next;
    while (p != NULL && p->data != e)
    {
        p = p->next;
    }
    return p;
}

bool Insert(LinkList &L, int i, Elem e)
{
    LinkList p = GetElem(L, i - 1);
    if (p == NULL)
    {
        return false;
    }
    LinkList s = (LinkList)malloc(sizeof(LNode));
    s->next = p->next;
    p->next = s;
    s->data = e;
    return true;
}

bool Delete(LinkList &L, int i)
{
    LinkList p = GetElem(L, i - 1);
    if (p == NULL)
    {
        return false;
    }

    LinkList q = p->next;
    p->next = q->next;
    free(q);
    return true;
}

int main()
{
    return 0;
}