#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "ArrayLinkedList.h"

/* ---삽입할 레코드의 인덱스를 구한 다음 반환--- */
static Index GetIndex(List *list)
{
    if(list->deleted == Null)           /* 삭제할 레코드가 없는 경우 */
        return ++(list->max);
    else
    {
        Index rec = list->deleted;
        list->deleted = list->n[rec].Dnext;
        return rec;
    }
}

/* ---지정된 레코드를 삭제 리스트에 등록--- */
static void DeleteIndex(List *list, Index idx)
{
    if(list->deleted == Null)           /* 삭제할 레코드가 없는 경우 */
    {
        list->deleted = idx;
        list->n[idx].Dnext = Null;
    }
    else
    {
        Index ptr = list->deleted;
        list->deleted = idx;
        list->n[idx].Dnext = ptr;
    }
}

/* ---n이 가리키는 노드의 각 멤버에 값을 설정--- */
static void SetNode(Node *n, const Member *x, Index next)
{
    n->data = *x;           /* 데이터 */
    n->next = next;         /* 다음 노드에 대한 포인터 */
}

void Initialize(List *list, int size)
{
    list->n = calloc(size, sizeof(Node));
    list->head = Null;
    list->crnt = Null;
    list->max = Null;
    list->deleted = Null;
}

Index search(List *list, const Member *x, int compare(const Member *x, const Member *y))
{
    Index ptr = list->head;
    while(ptr != Null)
    {
        if(compare(&list->n[ptr].data, x) == 0)
        {
            list->crnt = ptr;
            return ptr;
        }
        ptr = list->n[ptr].next;
    }
    return Null;
}

void InsertFront(List *list, const Member *x)
{
    Index ptr = list->head;
    list->head = list->crnt = GetIndex(list);
    SetNode(&list->n[list->head], x, ptr);
}

void InsertRear(List *list, const Member *x)
{
    if(list->head == Null)
        InsertFront(list, x);
    else
    {
        Index ptr = list->head;
        while(list->n[ptr].next != Null)
            ptr = list->n[ptr].next;
        list->n[ptr].next = list->crnt = GetIndex(list);
        SetNode(&list->n[list->n[ptr].next], x, Null);
    }
}

void RemoveFront(List *list)
{
    if(list->head != Null)
    {
        Index ptr = list->n[list->head].next;
        DeleteIndex(list, list->head);
        list->head = list->crnt = ptr;
    }
}

void RemoveRear(List *list)
{
    if(list->head != Null)
    {
        if(list->n[list->head].next == Null)
            RemoveFront(list);
        else
        {
            Index ptr = list->head;
            Index pre;
            while(list->n[ptr].next != Null)
            {
                pre = ptr;
                ptr = list->n[ptr].next;
            }
            list->n[pre].next = Null;
            DeleteIndex(list, ptr);
            list->crnt = pre;
        }
    }
}

void RemoveCurrent(List *list)
{
    if(list->head != Null)
    {
        if(list->crnt == list->head)
            RemoveFront(list);
        else
        {
            Index ptr = list->head;
            while(list->n[ptr].next != list->crnt)
                ptr = list->n[ptr].next;
            list->n[ptr].next = list->n[list->crnt].next;
            DeleteIndex(list, list->crnt);
            list->crnt = ptr;
        }
    }
}

void Purge(List *list, int compare(const Member *x, const Member *y))
{
    Index ptr = list->head;

    while(ptr != Null)
    {
        Index ptr2 = ptr;
        Index pre = ptr;

        while(list->n[ptr2].next != Null)
        {
            ptr2 = list->n[pre].next;
            if(!compare(&list->n[ptr].data, &list->n[ptr2].data))
            {
                list->n[pre].next = list->n[ptr2].next;
                DeleteIndex(list, ptr2);
            }
            else
                pre = ptr2;
        }
        ptr = list->n[ptr].next;
    }
    list->crnt = list->head;
}

Index Retrieve(List *list, int n)
{
    Index ptr = list->head;

    while(n >= 0 && ptr != Null)
    {
        if(n-- == 0)
        {
            list->crnt = ptr;
            return ptr;
        }
        ptr = list->n[ptr].next;
    }
    return Null;
}

void Clear(List *list)
{
    while(list->head != Null)
        RemoveFront(list);
    list->crnt = Null;
}

void PrintCurrent(const List *list)
{
    if(list->crnt == Null)
        printf("선택한 노드가 없습니다.");
    else
        PrintMember(&list->n[list->crnt].data);
}

void PrintLnCurrent(const List *list)
{
    PrintCurrent(list);
    putchar('\n');
}

void Print(const List *list)
{
    if(list->head == Null)
        puts("노드가 없습니다.");
    else
    {
        Index ptr = list->head;
        puts("모두 보기");
        while(ptr != Null)
        {
            PrintLnMember(&list->n[ptr].data);
            ptr = list->n[ptr].next;
        }
    }
}

void Terminate(List *list)
{
    Clear(list);
    free(list->n);
}