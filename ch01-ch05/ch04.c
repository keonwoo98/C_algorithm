#include <stdio.h>



// Q1
// #include "IntStack.h"
// int main(void)
// {
//     IntStack s;
//     if(Initialize(&s, 64) == -1) {
//         puts("스택 생성에 실패하였습니다.");
//         return 1;
//     }

//     while (1)
//     {
//         int menu, x;
//         int idx;
//         printf("현재 데이터의 수: %d / %d\n", Size(&s), Capacity(&s));
//         printf("(1)푸시 (2)팝 (3)피크 (4)비우기 (5)최대 용량 (6)데이터 개수 (7)비어 있나요? (8)가득 찼나요? (9)검색 (10)출력 (0)종료 : ");
//         scanf("%d", &menu);

//         if(menu == 0) break;
//         switch (menu)
//         {
//         case 1:
//             printf("데이터: ");
//             scanf("%d", &x);
//             if(Push(&s, x) == -1)
//                 puts("\a오류 : 푸시에 실패하였습니다.");
//             break;
        
//         case 2:
//             if(Pop(&s, &x) == -1)
//                 puts("\a오류 : 팝에 실패하였습니다.");
//             else
//                 printf("팝 데이터는 %d입니다.\n", x);
//             break;

//         case 3:
//             if(Peek(&s, &x) == -1)
//                 puts("\a오류 : 피크에 실패하였습니다.");
//             else
//                 printf("피크 데이터는 %d입니다.\n", x);
//             break;

//         case 4:
//             Clear(&s);
//             break;
        
//         case 5:
//             printf("스택의 최대 용량은 %d입니다.\n", Capacity(&s));
//             break;

//         case 6:
//             printf("현재 데이터의 수는 %d개 입니다.\n", Size(&s));
//             break;

//         case 7:
//             printf("스택이 비어 %s.\n", IsEmpty(&s) ? "있습니다" : "있지 않습니다");
//             break;

//         case 8:
//             printf("스택이 가득 %s.\n", IsFull(&s) ? "찼습니다" : "차지 않았습니다");
//             break;

//         case 9:
//             printf("검색 데이터: ");
//             scanf("%d", &x);
//             if((idx = Search(&s, x)) == -1)
//                 puts("\a검색에 실패했습니다.");
//             else
//                 printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
//             break;
        
//         case 10:
//             Print(&s);
//             break;
//         }
//     }
//     Terminate(&s);
//     return 0;
// }

// Q2
// #include "IntStack2.h"
// int main(void)
// {
//     IntStack s;

//     if(Initialize(&s, 12) == -1) {
//         puts("스택 생성에 실패했습니다.");
//         return 1;
//     }

//     while(1)
//     {
//         int menu, x;
//         int idx;

//         printf("\n현재 데이터 개수 : A:%d B:%d / %d\n", Size(&s, StackA), Size(&s, StackB), Capacity(&s));
//         printf("1) A에 Push 2) A에서 Pop 3) A에서 Peek 4) A를 출력 5) A에서 검색 6) A를 초기화\n"
//                 "7) B에 Push 8) B에서 Pop 9) B에서 Peek 10) B를 출력 11) B에서 검색 12) B를 초기화\n"
//                 "13) 빈 상태 / 가득 찬 상태 0) 종료 : ");
//         scanf("%d", &menu);

//         if(menu == 0) break;

//         switch (menu)
//         {
//         case 1:
//             printf("데이터: ");
//             scanf("%d", &x);
//             if(Push(&s, StackA, x) == -1)
//                 puts("\a오류: 푸시에 실패했습니다.");
//             break;
        
//         case 2:
//             if(Pop(&s, StackA, &x) == -1)
//                 puts("\a오류: 팝에 실패했습니다.");
//             else
//                 printf("팝한 데이터는 %d입니다.\n", x);
//             break;

//         case 3:
//             if(Peek(&s, StackA, &x) == -1)
//                 puts("\a오류: 피크에 실패했습니다.");
//             else
//                 printf("피크한 데이터는 %d입니다.\n", x);
//             break;

//         case 4:
//             Print(&s, StackA);
//             break;

//         case 5:
//             printf("검색 데이터: ");
//             scanf("%d", &x);
//             if((idx = Search(&s, StackA, x)) == -1)
//                 puts("\a오류: 검색에 실패했습니다.");
//             else
//                 printf("데이터 인덱스 %d 위치에 있습니다.\n", idx);
//             break;

//         case 6:
//             Clear(&s, StackA);
//             break;

//         case 7:
//             printf("데이터: ");
//             scanf("%d", &x);
//             if(Push(&s, StackB, x) == -1)
//                 puts("\a오류: 푸시에 실패했습니다.");
//             break;

//         case 8:
//             if(Pop(&s, StackB, &x) == -1)
//                 puts("\a오류: 팝에 실패했습니다.");
//             else
//                 printf("팝한 데이터는 %d입니다.\n", x);
//             break;

//         case 9:
//             if(Peek(&s, StackB, &x) == -1)
//                 puts("\a오류: 피크에 실패했습니다.");
//             else
//                 printf("피크한 데이터는 %d입니다.\n", x);
//             break;

//         case 10:
//             Print(&s, StackB);
//             break;

//         case 11:
//             printf("검색 데이터: ");
//             scanf("%d", &x);
//             if((idx = Search(&s, StackB, x)) == -1)
//                 puts("\a오류: 검색에 실패했습니다.");
//             else
//                 printf("데이터는 인덱스 %d 위치에 있습니다.\n", idx);
//             break;

//         case 12:
//             Clear(&s, StackB);
//             break;

//         case 13:
//             printf("스택 A는 비어%s.\n", IsEmpty(&s, StackA) ? "있습니다" : "있지 않습니다");
//             printf("스택 B는 비어%s.\n", IsEmpty(&s, StackB) ? "있습니다" : "있지 않습니다");
//             printf("스택은 가득%s.\n", IsFull(&s) ? "찼습니다" : "차지 않았습니다");
//             break;
//         }
//     }
//     Terminate(&s);

//     return 0;
// }