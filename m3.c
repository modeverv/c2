#include <stdio.h>

typedef struct {
    int num;
    int den;
} Frac;

double func(const Frac *, int);

int main(void)
{
    Frac f[5] = {
            { 3, 8 },
            { 1, 2 },
            { 4, 1 },
            { 6, 5 },
            { 2, 5 }
    };
    double result;
    result = func(f, 5);
    printf("%f\n", result);
    return 0;
}
double func(const Frac *frac, int len)
{
    double ret = 0;
    int i;
    for (i = 0; i < len; ++i)
    {
        ret += (double)(frac + i) -> num / (frac + i) -> den;
    }
    return ret;
}