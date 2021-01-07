#include <locale.h>
#include <iostream>
#include <stdarg.h>

int comparefunc(int num, ...)
{
    va_list calc;
    int res = 0;
    int num1 = 0;
    int num2 = 0;
    if (num % 2 != 0)
    {
        num--;
    }
    va_start(calc, num);
    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
        {
            num1 = va_arg(calc, int);
        }
        else
        {
            num2 = va_arg(calc, int);
        }
        if (num1 < num2 && num2 != 0)
        {
            res++;
        }
        num2 = 0;
    }
    va_end(calc);
    printf("%d\n", res);
    return 0;
}
int main()
{
    comparefunc(3, 29, 48, 36);
    comparefunc(5, -89, 56, 25, -48, 36);
    comparefunc(2, 23, 56);
}