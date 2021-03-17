#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char number[20];
    int age;
} Phone;

void phone_sort(Phone[], int);       // 이름으로 오름차순 정렬
void phone_print(Phone[], int);      // 모든 전화번호 출력
int SelectMenu(void)
{
    int menu;
    do
    {
        printf("\n1. 등록할 정보 입력(최대 10명)\n");
        printf("2. 등록한 정보 출력\n");
        printf("0. 종료\n");
        printf("번호를 입력하세요 : ");
        scanf("%d", &menu);
    } while (menu < 0 || menu > 2);
    return menu;
}

void ClearBuffer(void)
{
    while(getchar() != '\n');
}

int main()
{
    int cnt = 0;
    int menu;
    Phone table[10];                 // 전화번호 최대 10개 저장할 구조체 배열 변수
    
    do
    {
        switch(menu = SelectMenu())
        {
            case 1 :
                printf("이름 입력 : ");
                scanf("%s", table[cnt].name);
                printf("전화번호 입력 : ");
                scanf("%s", table[cnt].number);
                printf("나이 입력 : ");
                scanf("%d", &table[cnt].age);
                cnt++;
                fflush(stdin);                      // 모든 입력 후 입력버퍼를 비워서 혹여나 남아있을 개행문자 제거
                break;

            case 2 :
                phone_sort(table, cnt);
                phone_print(table, cnt);
                break;
        }
    } while (menu != 0);
}

void phone_sort(Phone table[], int cnt)
{
    int i, j;
    Phone temp;                      // 교환을 위한 임시 구조체 변수
    for(i = 0; i < cnt - 1; i++)          // i는 처음부터 마지막 전까지만 반복
        for(j = i + 1; j < cnt; j++)      // j는 i + 1부터 마지막까지 반복
            if(strcmp(table[i].name, table[j].name) > 0)
            {   // 만약 i번째의 이름이 j번째보다 크다면 교환해서 값이 큰 이름을 뒤쪽으로 옮김
                temp = table[i];
                table[i] = table[j];
                table[j] = temp;
            }
}

void phone_print(Phone table[], int cnt)
{
    int i;
    printf("\n------------------------------------\n");
    printf("%7s %16s %11s\n", "이름", "전화번호", "나이");
    printf("------------------------------------\n");
    for (i = 0; i < cnt; i++)
        printf("%9s %14s %6d\n", table[i].name, table[i].number, table[i].age);
    printf("------------------------------------\n\n");
}