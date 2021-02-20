#include <stdio.h>
#include <string.h>
#include <limits.h>

// 실습 8-1
// void str_dump(const char *s)
// {
//     do
//     {
//         int i;
//         printf("%c %0*X", *s, (CHAR_BIT + 3) / 4, *s);
//         for(i = CHAR_BIT - 1; i >= 0; i--)
//             putchar(((*s >> i) & 1U) ? '1' : '0');
//         putchar('\n');
//     } while (*s++ != '\0');
// }

// int main(void)
// {
//     str_dump("STRING");
//     return 0;
// }

// 실습 8-2
// int main(void)
// {
//     char st[10];
//     st[0] = 'A';
//     st[1] = 'B';
//     st[2] = 'C';
//     st[3] = 'D';
//     st[4] = '\0';
//     printf("문자열 st에는 \"%s\"가 들어 있습니다.\n", st);

//     return 0;
// }

// 실습 8-3
// int main(void)
// {
//     char st[10] = "ABCD";
//     printf("문자열 st에는 \"%s\"가 들어 있습니다.\n", st);
//     return 0;
// }

// 실습 8-4
// int main(void)
// {
//     char *pt = "12345";
//     printf("포인터 pt는 \"%s\"를 가리킵니다.\n", pt);
//     return 0;
// }

// 실습 8-5
// void swap_ptr(char **x, char **y)
// {
//     char *tmp = *x;
//     *x = *y;
//     *y = tmp;
// }

// int main(void)
// {
//     char *s1 = "ABCD";
//     char *s2 = "EFGH";

//     printf("포인터 s1은 \"%s\"를 가리킵니다.\n", s1);
//     printf("포인터 s2은 \"%s\"를 가리킵니다.\n", s2);

//     swap_ptr(&s1, &s2);

//     puts("\n포인터 s1과 s2의 값을 서로 교환했습니다.\n");

//     printf("포인터 s1은 \"%s\"를 가리킵니다.\n", s1);
//     printf("포인터 s2은 \"%s\"를 가리킵니다.\n", s2);

//     return 0;
// }

// Q2
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// int main(void)
// {
//     char *s1 = "ABCD";
//     char *s2 = "EFGH";

//     printf("포인터 s1은 \"%s\"를 가리킵니다.\n", s1);
//     printf("포인터 s2은 \"%s\"를 가리킵니다.\n", s2);

//     swap(char*, s1, s2);

//     puts("\n포인터 s1과 s2의 값을 서로 교환했습니다.\n");

//     printf("포인터 s1은 \"%s\"를 가리킵니다.\n", s1);
//     printf("포인터 s2은 \"%s\"를 가리킵니다.\n", s2);

//     return 0;
// }

// Q3
// void swap_str(char *x, char *y)
// {
//     char *temp;
//     while(*x && *y)
//     {
//         char t = *x; *x++ = *y; *y++ = t;
//     }
//     if(*x)
//     {
//         temp = x;
//         while(*x) {*y++ = *x++;}
//         *temp = *y = '\0';
//     }
//     else if(*y)
//     {
//         temp = y;
//         while(*y) {*x++ = *y++;}
//         *temp = *x = '\0';
//     }
//     else
//     {
//         *x = *y = '\0';
//     }
    
// }

// int main(void)
// {
//     char s1[128], s2[128];

//     printf("s1 = "); scanf("%s", s1);
//     printf("s2 = "); scanf("%s", s2);

//     swap_str(s1, s2);

//     puts("\n두 문자열을 교환했습니다.");
//     printf("s1 : %s\n", s1);
//     printf("s2 : %s\n", s2);

//     return 0;
// }

// 실습 8-6
// int str_len(const char *s)
// {
//     int len = 0;

//     while(s[len])
//         len++;
//     return len;
// }

// int main(void)
// {
//     char str[256];
//     printf("문자열 : ");
//     scanf("%s", str);
//     printf("이 문자열의 길이는 %d입니다.\n", str_len(str));

//     return 0;
// }

// 실습 8-7
// int str_len(const char *s)
// {
//     int len = 0;
//     while(*s++)
//         len++;
//     return len;
// }

// int main(void)
// {
//     char str[256];
//     printf("문자열 : ");
//     scanf("%s", str);
//     printf("이 문자열의 길이는 %d입니다.\n", str_len(str));

//     return 0;
// }

// 실습 8-8
// int str_len(const char *s)
// {
//     const char *p = s;
//     while(*s)
//         s++;
//     return s - p;
// }

// int main(void)
// {
//     char str[256];
//     printf("문자열 : ");
//     scanf("%s", str);
//     printf("이 문자열의 길이는 %d입니다.\n", str_len(str));

//     return 0;
// }

// 실습 8-9
int str_chr(const char *s, int c)
{
    int i = 0;
    c = (char)c;
    while(s[i] != c)
    {
        if(s[i] == '\0')
            return -1;
        i++;
    }
    return i;
}

int main(void)
{
    char str[64];
    char tmp[64];
    int ch;
    int idx;

    printf("문자열 : ");
    scanf("%s", str);

    printf("검색할 문자 : ");
    scanf("%s", tmp);
    ch = tmp[0];

    if((idx = str_chr(str, ch)) == -1)
        printf("문자 %c는 문자열에 없습니다.\n", ch);
    else
        printf("문자 %c는 %d번째에 있습니다.\n", ch, idx + 1);

    return 0;
}