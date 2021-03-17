#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Point;

Point getSum(Point p1, Point p2);
Point getSub(Point p1, Point p2);
double getDistance(Point p1, Point p2);

int main()
{
    Point p1, p2;
    Point sum, sub;
    double distance;

    printf("첫 번째 점의 x좌표 : ");
    scanf("%d", &p1.x);
    printf("첫 번째 점의 y좌표 : ");
    scanf("%d", &p1.y);

    printf("두 번째 점의 x좌표 : ");
    scanf("%d", &p2.x);
    printf("두 번째 점의 y좌표 : ");
    scanf("%d", &p2.y);

    printf("\n첫 번째 점의 위치 : (%d, %d)\n", p1.x, p1.y);
    printf("두 번째 점의 위치 : (%d, %d)\n\n", p2.x, p2.y);

    sum = getSum(p1, p2);
    sub = getSub(p1, p2);
    distance = getDistance(p1, p2);

    printf("두 점의 합 : (%d, %d)\n", sum.x, sum.y);
    printf("두 점의 차 : (%d, %d)\n", sub.x, sub.y);
    printf("두 점의 거리 : %4lf\n", distance);
    return 0;
}

Point getSum(Point p1, Point p2)
{
    Point p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;
    return p;
}

Point getSub(Point p1, Point p2)
{
    Point p;
    p.x = p1.x - p2.x;
    p.y = p1.y - p2.y;
    return p;
}

double getDistance(Point p1, Point p2)
{
    Point p;
    p.x = pow(p1.x - p2.x, 2);
    p.y = pow(p1.y - p2.y, 2);
    return sqrt(p.x + p.y);
}