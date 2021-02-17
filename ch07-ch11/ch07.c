#include <stdio.h>
#include "IntSet.h"

// 실습 7-3
// int main(void)
// {
// 	IntSet s1, s2, s3;
// 	Initialize(&s1, 24);
// 	Initialize(&s2, 24);
// 	Initialize(&s3, 24);

// 	Add(&s1, 10);
// 	Add(&s1, 15);
// 	Add(&s1, 20);
// 	Add(&s1, 25);

// 	Assign(&s2, &s1);
// 	Add(&s2, 12);
// 	Remove(&s2, 20);
// 	Assign(&s3, &s2);

// 	printf("s1 = "); PrintLn(&s1);
// 	printf("s2 = "); PrintLn(&s2);
// 	printf("s3 = "); PrintLn(&s3);

// 	printf("집합 s1에 15가 들어 있%s.\n", IsMember(&s1, 15) > 0 ? "습니다" : "지 않습니다");
// 	printf("집합 s2에 25가 들어 있%s.\n", IsMember(&s2, 25) > 0 ? "습니다" : "지 않습니다");
// 	printf("집합 s1과 s2는 서로 같%s.\n", Equal(&s1, &s2) > 0 ? "습니다" : "지 않습니다");
// 	printf("집합 s2와 s3는 서로 같%s.\n", Equal(&s2, &s3) > 0 ? "습니다" : "지 않습니다");

// 	Terminate(&s1);
// 	Terminate(&s2);
// 	Terminate(&s3);

// 	return 0;
// }

// 실습 7-4
// enum { ADD, RMV, SCH };

// int scan_data(int sw)
// {

// 	int data;
// 	switch (sw)
// 	{
// 	case ADD: printf("추가할 데이터 : "); break;
// 	case RMV: printf("삭제할 데이터 : "); break;
// 	case SCH: printf("검색할 데이터 : "); break;
// 	}
// 	scanf("%d", &data);
// 	return data;
// }

// int main(void)
// {
// 	IntSet s1, s2, temp;
// 	Initialize(&s1, 512);
// 	Initialize(&s2, 512);
// 	Initialize(&temp, 512);

// 	while (1)
// 	{
// 		int m, x, idx;
 
// 		printf("s1 = "); PrintLn(&s1);
// 		printf("s2 = "); PrintLn(&s2);
// 		printf("(1)s1에 추가 (2)s1에서 삭제 (3)s1에서 검색 (4)s1←s2 (5)여러 연산\n"
// 			"(6)s2에 추가 (7)s2에서 삭제 (8)s2에서 검색 (9)s2←s1 (0)종료 : ");

// 		scanf("%d", &m);
// 		if (m == 0) break;
// 		switch (m)
// 		{
// 		case 1: x = scan_data(ADD); Add(&s1, x); break;
// 		case 2: x = scan_data(RMV); Remove(&s1, x); break;
// 		case 3: x = scan_data(SCH); idx = IsMember(&s1, x);
// 			printf("s1에 들어 있%s.\n", idx >= 0 ? "습니다" : "지 않습니다"); break;
// 		case 4: Assign(&s1, &s2); break;
// 		case 5: printf("s1 == s2 = %s\n", Equal(&s1, &s2) ? "true" : "false");
// 			printf("s1 & s2 = "); Intersection(&temp, &s1, &s2);
// 			PrintLn(&temp);
// 			printf("s1 | s2 = "); Union(&temp, &s1, &s2);
// 			PrintLn(&temp);
// 			printf("s1 - s2 = "); Difference(&temp, &s1, &s2);
// 			PrintLn(&temp);
// 			break;
// 		case 6: x = scan_data(ADD); Add(&s2, x); break;
// 		case 7: x = scan_data(RMV); Remove(&s2, x); break;
// 		case 8: x = scan_data(SCH); idx = IsMember(&s2, x);
// 			printf("s2에 들어 있%s.\n", idx >= 0 ? "습니다" : "지 않습니다"); break;
// 		case 9: Assign(&s2, &s1); break;
// 		}
// 	}

// 	Terminate(&s1);
// 	Terminate(&s2);
// 	Terminate(&temp);

// 	return 0;
// }