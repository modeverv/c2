#include <stdio.h>
#include <string.h>

int mystrlen(char *x)
{
    int len = 0;

    while(*(x+len) != '\0') {
        len++;
    }
    return len;
}

int count_char(const char *s, char c)
{
    int num;
    for (num = 0; *s != '\0'; ++s)
    {
        if (c == *s)
        {
            ++num;
        }
    }
    return num;
}

typedef struct {
    char name[10];
    int height;
    int weight;
} PDATA;

struct frac {
    int num;
    int den;
};

double val(const struct frac *);

struct result { int r };

int main(void)
{
    struct result r1 = {1};
/*
    char *cp = "str";
    int len = mystrlen(cp);
    printf("%d\n", len);
*/

/*
    const char *cp = "string";
    int i;
    for (i = 0; *(cp+i) != '\0' ; ++i)
    {
        printf("%c\n", *(cp + i));
    }
*/

/*
    char str[] = "12345";
    str[4] = '\0';
    printf("%s\n", &str[2]);
*/

/*
    char str[] = "12345";
    str[4] = '\0';
    printf("%s\n", &str[2]);
*/
/*
printf("%d", count_char("aabbcc", 'b'));
*/
/*
    char name[5][10] = {
            "Morimoto",
            "Yamada",
            "Tanaka",
            "Takahashi",
            "Ito"
    };
    int max_len, i;
    for (max_len = -1, i = 0; i < 5; ++i)
    {
        int len;
        len = (int)strlen(name[i]);
        if (len > max_len)
        {
            max_len = len;
        }
    }
    printf("%d\n", max_len);
*/
/*
    PDATA pd[] = {
            { "Ito", 170, 71 },
            { "Sato", 182, 74 },
            { "Takahashi", 166, 54 },
            { "Hasegawa", 153, 59 },
            { "Yano", 161, 61 }
    };
    int len, i;
    len = (int)(sizeof pd / sizeof pd[0]);
    (&pd[2])->height;
    for (i = 0; i < len; ++i)
    {
        printf("%sさんのBMIは%.1fです。\n", pd[i].name, calc_bmi(&pd[i]));
    }
*/
/*
    struct frac f1 = { 3, 10 };
    struct frac f2 = { 5, 6 };
    double result;
    result = (double)(f1.num * f2.num) / (f1.den * f2.den);
    //15 / 60 = 0.25
    printf("%f\n", result);
*/

    struct frac f1 = { 3, 10 };
    struct frac f2 = { 1, 2 };
    printf("%f\n", val(&f1) + val(&f2));

}

double val(const struct frac *f)
{
    return (double)f->num / f->den;
}