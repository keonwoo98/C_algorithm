// 첫번째 방식

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     long long num, j;                   // 19자리 숫자를 입력받기 위한 변수
//     int i;
//     int arr[19];                        // 각 자리 별로 수를 저장할 배열
//     int max = 0;                        // 각 자리 별로 저장한 수 중 가장 큰 수를 저장할 변수
//     printf("수를 입력하세요 : ");
//     scanf("%lld", &num);
//     // 10의 18승 자리부터 10의 0승 자리(1의 자리)까지 확인하기 위한 반복
//     for(i = 18, j = pow(10, i); i >= 0; i--, j = pow(10, i))
//     {
//         arr[18 - i] = num / j;
//         if(arr[18 - i] > max)           // 만약 현재 자리수가 가장 크면 max에 저장
//             max = arr[18 - i];
//         num %= j;
//     }
//     printf("\n");
//     for(i = 0; i < max; i++)
//     {
//         for(j = 0; j < 19; j++)         // j는 0부터 18까지의 각 자리수 별로 * 모양을 출력하기 위한 반복
//             if(arr[j])                  // arr배열의 j번째가 0이 아니면 입력된 자리이므로 * 또는 공백 출력
//             {
//                 if(max - i <= arr[j]) printf(" *");
//                 // 만약 max - i 값이 arr배열의 j번째 값보다 작거나 같으면 * 모양 출력
//                 else printf("  ");      // 아니면 공백 출력
//             }
//         printf("\n");                   // 한 행을 출력하면 한 줄 개행
//     }
//     for(i = 0; i < 19; i++)
//         if(arr[i])
//             printf(" %d", arr[i]);
//     printf("\n\n");
//     return 0;
// }



// 두번째 방식

// #include <stdio.h>

// int main()
// {
//     int num[50];                            // 최대 50개의 숫자를 입력받기 위한 변수
//     int i, j;
//     int max = 0;                            // 입력받은 수 중 가장 큰 수를 저장할 변수
//     int cnt;                                // 입력받은 수의 개수를 저장할 변수
//     printf("수를 입력해주세요(숫자간 띄어쓰기) (그만하려면 0 입력) : ");
//     for(i = 0; i < 50; i++)
//     {
//         scanf("%d", &num[i]);
//         if(num[i] > max)
//             max = num[i];
//         if(num[i] == 0)                     // 입력받은 수가 0이면 반복 종료
//             break;
//     }
//     cnt = i;
//     printf("\n");
//     for(i = 0; i < max; i++)
//     {
//         for(j = 0; j < cnt; j++)            // j는 cnt까지 각각의 숫자 별로 * 모양을 출력하기 위한 반복
//         {
//             if(max - i <= num[j]) printf("  *");
//             // 만약 max - i 값이 num배열의 j번째 값보다 작거나 같다면 * 모양 출력
//             else printf("   ");             // 아니면 공백 출력
//         }
//         printf("\n");                       // 한 행을 출력하면 개행
//     }
//     for(i = 0; i < cnt; i++)
//         printf("%3d", num[i]);
//     printf("\n\n");
//     return 0;
// }



// 세번째 방식

#include <stdio.h>
#include <string.h>

int main()
{
    char num[50];                               // 최대 50자리 숫자를 입력받기 위한 변수
    int i, j;
    int max = 0;                                // 입력받은 수 중 가장 큰 수를 저장할 변수
    int len;                                    // 입력받은 수의 자리수를 저장할 면수
    printf("수를 입력해주세요 : ");
    scanf("%s", num);
    len = strlen(num);
    for(i = 0; i < len; i++)
    {
        num[i] -= '0';                          // char형 숫자들을 모두 숫자로 바꾸기 위해 '0'을 빼줌
        // '0' == 48, '1' == 49 => '0' == 0, '1' == 1
        if(num[i] > max)
            max = num[i];
    }
    printf("\n");
    for(i = 0; i < max; i++)
    {
        for(j = 0; j < len; j++)
        {
            if(max - i <= num[j]) printf(" *");
            else printf("  ");
        }
        printf("\n");
    }
    for(i = 0; i < len; i++)
        printf(" %d", num[i]);
    printf("\n\n");
    return 0;
}