#include <stdio.h>
#include <string.h>

int main()
{
    char str[255];
    int len;
    int cnt[26] = { 0 };
    int i;
    printf("문자열 입력 : ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++)
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i] <= 'Z')
                cnt[str[i] - 'A']++;
            else
                cnt[str[i] - 'a']++;
        }
    for(i = 0; i < 26; i++)
        if(cnt[i])
            printf("%c : %d\n", 'A' + i, cnt[i]);
    return 0;
}