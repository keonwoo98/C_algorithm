#include <stdio.h>
#include <string.h>

struct phone {
    char name[20];
    char number[20];
    int age;
};

void phone_sort(struct phone[], int);       // 이름으로 오름차순 정렬
void phone_print(struct phone[], int);      // 모든 전화번호 출력

int main()
{
    int i;
    int count;                              // 전화번호 개수 저장할 변수
    struct phone table[10];                 // 전화번호 최대 10개 저장할 구조체 배열 변수
    printf("등록할 정보 입력(최대 10명)\n");
    printf("그만 입력하려면 0 입력\n");
    for(i = 0; i < 10; i++)
    {
        printf("이름 입력 : ");
        scanf("%s", table[i].name);
        if(strcmp(table[i].name, "0") == 0)
            break;
        printf("전화번호 입력 : ");
        scanf("%s", table[i].number);
        printf("나이 입력 : ");
        scanf("%d", &table[i].age);
        fflush(stdin);                      // 모든 입력 후 입력버퍼를 비워서 혹여나 남아있을 개행문자 제거
    }
    count = i;
    phone_sort(table, count);
    phone_print(table, count);
    return 0;
}

void phone_sort(struct phone table[], int count)
{
    int i, j;
    struct phone temp;                      // 교환을 위한 임시 구조체 변수
    for(i = 0; i < count - 1; i++)          // i는 처음부터 마지막 전까지만 반복
        for(j = i + 1; j < count; j++)      // j는 i + 1부터 마지막까지 반복
            if(strcmp(table[i].name, table[j].name) == 1)
            {   // 만약 i번째의 이름이 j번째보다 크다면 교환해서 값이 큰 이름을 뒤쪽으로 옮김
                temp = table[i];
                table[i] = table[j];
                table[j] = temp;
            }
}

void phone_print(struct phone table[], int count)
{
    int i;
    printf("\n------------------------------------\n");
    printf("%8s %16s %6s\n", "이름", "전화번호", "나이");
    printf("------------------------------------\n");
    for (i = 0; i < count; i++)
        printf("%8s %16s %6d\n", table[i].name, table[i].number, table[i].age);
    printf("------------------------------------\n\n");
}