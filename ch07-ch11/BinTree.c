#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "BinTree.h"

static BinNode *AllocBinNode(void)
{
    return calloc(1, sizeof(BinNode));
}

static void SetBinNode(BinNode *n, const Member *x, const BinNode *left, const BinNode *right)
{
    n->data = *x;
    n->left = left;
    n->right = right;
}

BinNode *Search(BinNode *p, const Member *x)
{
    int cond;
    if(p == NULL)
        return NULL;
    else if((cond = MemberNoCmp(x, &p->data)) == 0)
        return p;
    else if(cond < 0)
        Search(p->left, x);
    else
        Search(p->right, x);
}