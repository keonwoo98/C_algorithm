#include <stdio.h>
#include "Member.h"
#include "BinTree.h"

// 실습 10-3
typedef enum
{
    TERMINATE, ADD, REMOVE, SEARCH, MIN, MAX, PRINT, PRINTREVERSE
} Menu;

Menu SelectMenu(void)
{
    int ch;
    do
    {
        printf("(1)삽입 (2)삭제 (3)검색 (4)최솟값 (5)최댓값 (6)출력 (7)내림차순 출력 (0)종료 : ");
        scanf("%d", &ch);
    } while (ch < TERMINATE || ch > PRINTREVERSE);
    return(Menu)ch;
}

int main(void)
{
    Menu menu;
    BinNode *root = NULL;
    do
    {
        Member x;
        BinNode *temp;
        switch(menu = SelectMenu())
        {
            case ADD :
                x = ScanMember("삽입", MEMBER_NO | MEMBER_NAME);
                root = Add(root, &x);
                break;
            
            case REMOVE :
                x = ScanMember("삭제", MEMBER_NO);
                Remove(&root, &x);
                break;

            case SEARCH :
                x = ScanMember("검색", MEMBER_NO);
                if((temp = Search(root, &x)) != NULL)
                    PrintLnMember(&temp->data);
                break;

            case MIN :
                puts("최솟값");
                PrintLnMember(&(GetMinNode(root))->data);
                break;

            case MAX :
                puts("최댓값");
                PrintLnMember(&(GetMaxNode(root))->data);
                break;

            case PRINT :
                puts("모든 노드 출력");
                PrintTree(root);
                break;

            case PRINTREVERSE :
                puts("모든 노드 내림차순 출력");
                PrintTreeReverse(root);
                break;
        }
    } while (menu != TERMINATE);
    FreeTree(root);
    return 0;
}