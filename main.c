#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    double da[] = { 1.1, 2.5, 3.0, 4.7, 5.2 }, x;
    int len, i;
    len = (int)(sizeof da / sizeof da[0]); // 配列の長さ
    for (x = 0, i = 0; i < len; ++i)
    {
        x += da[i];
    }
    // sumとって割るので平均
    x /= len;
    printf("%f\n", x);









}
