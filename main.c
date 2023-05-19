#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void func(int y)
//{
//    y += 1;
//}

//void func2(double *d)
//{
//  *d += 1.5;
//}

//void func3(int *y)
//{
//    printf("%p\n", &y);
//}

void func1(int);
void func2(int *);

int gt5(const int *ip, int len)
{
    int num, i;
    for (num = 0, i = 0; i < len; ++i)
    {
        if ( *(++ip) > 5 )
        {
            ++num;
        }
    }
    return num;
}

int main() {
//    printf("Hello, World!\n");

//    int num;
//    printf("来店人数 (1-9) > ");
//    scanf("%d", &num);
//    switch (num)
//    {
//        case <= 2:
//            printf("カウンター\n");
//            break;
//        case 3:
//        case 4:
//            printf("テーブル\n");
//            break;
//        default:
//            printf("座敷\n");
//            break;
//    }
//    return 0;

//    int total = 0, n;
//    printf("2以上の整数 > ");
//    scanf("%d", &n);
//    printf("1から%dまでの整数の総和は", n);
//    do
//    {
//        total += n;
//        --n;
//    } while ( n > 0 );
//    printf("%dです。\n", total);
//    return 0;
//    return 0;

//    int i = 3;
//    do
//    {
//        printf("%d ", --i);
//    } while (i >= 0);
//    int ia[] = { 3, 4, 5 };
//    printf("%d\n", ia[2]);
//    return 0;
//    int ia[] = { 1, 2, 3, 4 };
//    int i;
//    for (i = 0; i <= 2; ++i)
//    {
//        ia[i + 1] += ia[i];
//    }
//    printf("%d\n", ia[3]);
//    srand((unsigned int)time(NULL));
//    int i;
//    for (i = 0; i < 100; ++i)
//    {
//        printf("%d\n", 1 + rand() % 10);
//    }
//    return 0;



//    int ia[] = { 3, 4, 5 };
//    printf("%d\n", ia[2]);
//    return 0;

//    double da[] = { 1.1, 2.5, 3.0, 4.7, 5.2 }, x;
//    int len, i;
//    len = (int)(sizeof da / sizeof da[0]); // 配列の長さ
//    for (x = 0, i = 0; i < len; ++i)
//    {
//        x += da[i];
//    }
//    // sumとって割るので平均
//    x /= len;
//    printf("%f\n", x);


//    int x = 2, y = 3;
//    int *xp, *yp;
//    xp = &x;
//    yp = &y;
//    printf("%d\n", x * y + *xp + *yp);


//    int x = 2;
//    func(x);
//    printf("%d\n", x);
//    return 0;

//    int x = 2;
//    func(x);
//    printf("%d\n", x);
//    return 0;

//    double x = 2.4;
//    func2(&x); /* x に 1.5 を加算して 3.9 に更新する */
//    printf("%f\n", x); /* x の値である 3.9 を表示する */
//    return 0;

//    int x;
//    printf("%p\n", &x);
//    func3(&x);
//    return 0;

//    int x = 1;
//    func1(&x);
//    printf("%d\n", x);
//    return 0;

//    int i;
//    int *ip;
//    ip = &i;
//    printf("%p\n", ip);

//    int x;
//    printf("%p\n", &x);
//    func(&x);
//    return 0;

//    int x = 0;
//    func1(x);
//    func2(&x);
    int ar[] = {1,6,6};
    printf("%d\n", gt5(ar,3));
    return 0;

}

void func1(int x)
{
    x += 1;
}
void func2(int *x)
{
    *x += 2;
}