#include "function.h"

//递归实现
//abdhiejcfg
void preOrder(BiTree p) {
    if (p != NULL) {
        putchar(p->c);//等价于visit函数
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

//中序遍历  hdibjeafcg
void InOrder(BiTree p) {
    if (p != NULL) {
        InOrder(p->lchild);
        putchar(p->c);
        InOrder(p->rchild);
    }
}

//hidjebfgca
void PostOrder(BiTree p) {
    if (p != NULL) {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        putchar(p->c);
    }
}

//中序遍历非递归，非递归执行效率更高，考的概率很低
void InOrder2(BiTree T) {
    SqStack S;
    InitStack(S);
    BiTree p = T;
    while (p || !StackEmpty(S))//逻辑或||
    {
        if (p) {
            Push(S, p);
            p = p->lchild;
        } else {
            Pop(S, p);
            putchar(p->c);
            p = p->rchild;
        }
    }
}

//层次遍历,广度优先遍历
void LevelOrder(BiTree T) {
    LinkQueue Q;
    InitQueue(Q);
    BiTree p;
    EnQueue(Q, T);//树根入队
    while (!IsEmpty(Q)) {
        DeQueue(Q, p);
        putchar(p->c);
        if (p->lchild != NULL)
            EnQueue(Q, p->lchild);
        if (p->rchild != NULL)
            EnQueue(Q, p->rchild);
    }
}

//《王道C督学营》课程
//二叉树的建树（层次建树），前序、中序、后序遍历、中序非递归遍历、层次遍历
int main() {
    BiTree pnew;
    int i, j, pos;
    char c;
    BiTree tree = NULL;//树根
    ptag_t phead = NULL, ptail = NULL, listpnew, pcur;//phead就是队列头，ptail就是队列尾
    //abcdefghij
    while (scanf("%c", &c) != EOF) {
        if (c == '\n') {
            break;
        }
        pnew = (BiTree) calloc(1, sizeof(BiTNode));//calloc申请空间并对空间进行初始化，赋值为0
        pnew->c = c;//数据放进去
        listpnew = (ptag_t) calloc(1, sizeof(tag_t));//给队列结点申请空间
        listpnew->p = pnew;
        if (NULL == tree) {
            tree = pnew;//树的根
            phead = listpnew;//队列头
            ptail = listpnew;//队列尾
            pcur = listpnew;
            continue;
        } else {
            ptail->pnext = listpnew;//新结点放入链表，通过尾插法
            ptail = listpnew;//ptail指向队列尾部
        }//pcur始终指向要插入的结点的位置
        if (NULL == pcur->p->lchild)//如何把新结点放入树
        {
            pcur->p->lchild = pnew;//把新结点放到要插入结点的左边
        } else if (NULL == pcur->p->rchild) {
            pcur->p->rchild = pnew;//把新结点放到要插入结点的右边
            pcur = pcur->pnext;//左右都放了结点后，pcur指向队列的下一个
        }
    }
    printf("--------前序遍历----------\n");
    preOrder(tree);
    printf("\n--------中序遍历------------\n");
    InOrder(tree);
    printf("\n--------后序遍历------------\n");
    PostOrder(tree);
    printf("\n--------中序遍历非递归------\n");//重要性低
    InOrder2(tree);
    printf("\n--------层次遍历-----------\n");
    LevelOrder(tree);
    printf("\n");
    system("pause");
} 