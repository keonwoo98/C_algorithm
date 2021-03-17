#include <stdio.h>
#include <string.h>

int main()
{
    char str[255];                          // 사용자에게 문자열을 입력받아 저장할 변수
    int len;                                // 입력받은 문자열의 길이를 저장할 변수
    int cnt[26] = { 0 };                    // 문자열 내에 알파벳 빈도수를 저장할 배열
    int i;
    printf("문자열 입력 : ");
    gets(str);                              // 공백 포함 문자열을 입력 받음
    len = strlen(str);
    for(i = 0; i < len; i++)
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i] <= 'Z')               // 'Z' = 90
                cnt[str[i] - 'A']++;        // 'A' = 65
            else
                cnt[str[i] - 'a']++;        // 'a' = 97
        }
    for(i = 0; i < 26; i++)
        if(cnt[i])
            printf("%c : %d\n", 'A' + i, cnt[i]);
    return 0;
}