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
// int str_chr(const char *s, int c)
// {
//     int i = 0;
//     c = (char)c;
//     while(s[i] != c)
//     {
//         if(s[i] == '\0')
//             return -1;
//         i++;
//     }
//     return i;
// }

// int main(void)
// {
//     char str[64];
//     char tmp[64];
//     int ch;
//     int idx;

//     printf("문자열 : ");
//     scanf("%s", str);

//     printf("검색할 문자 : ");
//     scanf("%s", tmp);
//     ch = tmp[0];

//     if((idx = str_chr(str, ch)) == -1)
//         printf("문자 %c는 문자열에 없습니다.\n", ch);
//     else
//         printf("문자 %c는 %d번째에 있습니다.\n", ch, idx + 1);

//     return 0;
// }

// Q5
// char *str_chr(const char *s, int c)
// {
//     c = (char)c;
//     while(*s != c)
//     {
//         if(*s == '\0')
//             return NULL;
//         s++;
//     }
//     return (char *)s;
// }

// int main(void)
// {
//     char str[64];
//     char tmp[64];
//     int ch;
//     char *idx;

//     printf("문자열 : ");
//     scanf("%s", str);

//     printf("검색 : ");
//     scanf("%s", tmp);
//     ch = tmp[0];

//     if((idx = str_chr(str, ch)) == -1)
//         printf("문자 %c는 문자열 안에 없습니다.\n", ch);
//     else
//         printf("문자 %c는 %ld번째에 있습니다.\n", ch, (idx - str) + 1);

//     return 0;
// }

// Q6
// char *str_rchr(const char *s, int c)
// {
//     const char *p = NULL;

//     c = (char)c;
//     while(1)
//     {
//         if(*s == c)
//             p = s;
//         if(*s == '\0')
//             break;
//         s++;
//     }
//     return (char *)p;
// }

// int main(void)
// {
//     char str[64];
//     char tmp[64];
//     int ch;
//     char *idx;

//     printf("문자열 : ");
//     scanf("%s", str);

//     printf("검색 : ");
//     scanf("%s", tmp);
//     ch = tmp[0];

//     if((idx = str_rchr(str, ch)) == -1)
//         printf("문자 %c는 문자열 안에 없습니다.\n", ch);
//     else
//         printf("문자 %c는 %ld번째에 있습니다.\n", ch, (idx - str) + 1);

//     return 0;
// }

// 실습 8-10
// int str_cmp(const char *s1, const char *s2)
// {
//     while(*s1 == *s2)
//     {
//         if(*s1 == '\0')
//             return 0;
//         s1++;
//         s2++;
//     }
//     // return (unsigned char)*s1 - (unsigned char)*s2;
//     return *s1 - *s2;
// }

// int main(void)
// {
//     char st[128];
//     puts("\"ABCD\"와 비교합니다.");
//     puts("\"XXXX\"면 종료합니다.");
//     while(1)
//     {
//         printf("문자열 st : ");
//         scanf("%s", st);
//         if(str_cmp("XXXX", st) == 0)
//             break;
//         printf("str_cmp(\"ABCD\", st) = %d\n", str_cmp("ABCD", st));
//     }
//     return 0;
// }

// 실습 8-11
// int main(void)
// {
//     char st[128];
//     puts("\"STRING\"의 처음 3개의 문자와 비교합니다.");
//     puts("\"XXXX\"면 종료합니다.");
//     while(1)
//     {
//         printf("문자열 st : ");
//         scanf("%s", st);
//         if(strncmp("XXXX", st, 4) == 0)
//             break;
//         printf("strncmp(\"STRING\", st) = %d\n", strncmp("STRING", st, 4));
//     }
//     return 0;
// }