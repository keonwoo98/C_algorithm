#ifndef ___ArrayLinkedList
#define ___ArrayLinkedList

#include "Member.h"

#define Null -1         /* 빈 커서 */

typedef int Index;      /* 커서의 자료형 */

/* ---노드--- */
typedef struct
{
    Member data;        /* 데이터 */
    Index next;         /* 다음 노드 */
    Index Dnext;        /* 프리 리스트의 다음 노드 */
} Node;

/* ---연결 리스트--- */
typedef struct
{
    Node *n;            /* 리스트 본체(배열) */
    Index head;         /* 머리 노드 */
    Index max;          /* 사용 중인 꼬리 레코드 */
    Index deleted;      /* 프리 리스트의 머리 노드 */
    Index crnt;         /* 선택한 노드 */
} List;

void Initialize(List *list, int size);

Index search(List *list, const Member *x, int compare(const Member *x, const Member *y));

void InsertFront(List *list, const Member *x);

void InsertRear(List *list, const Member *x);

void RemoveFront(List *list);

void RemoveRear(List *list);

void RemoveCurrent(List *list);

void Clear(List *list);

void PrintCurrent(const List *list);

void PrintLnCurrent(const List *list);

void Print(const List *list);

void Terminate(List *list);

#endif