#include <locale.h>

#include <stdarg.h>
#include <stdio.h>

/**
*Labrab07
*@author Rossiyskiy D.
*@version 1.0



/*! 
\brief Function that resolves Lab07 task.

\version 1.0.0

\return Numbers of pairs 




<param name="res">Result </param>
<param name="num1"> First number to compare</param>
<param name="num2"> Second number to compare</param>
<param name="va_start"> Start of a function with variative args</param>
<param name="for"> Cycle for compairing numbers</param>
<param name="va_end">End of a function with variative args</param>
 */

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
/// <param name="comparefunc"> Random numbers to compare </param>
int main()
{
    comparefunc(1, 2, 3;
    comparefunc(9,10);
    comparefunc(12, 34, 56,78);
}
