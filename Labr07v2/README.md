
	Автор:    Російський Д., КІТ-120д
	    Дата:  25-12-2020
**Лабораторна робота № 7,8,9,10**
**Тема.** Функції; Вступ до блок-схем алгоритмів; Вступ до документації коду
**Мета:** придбати практичні навички по заданим темам
1. **ЗАВДАННЯ ДО РОБОТИ**
Загальне завдання: 
![text](https://imagizer.imageshack.com/img924/8007/aLyXlU.png)
![text](https://imagizer.imageshack.com/img922/9686/crXwRZ.png)
![text](https://imagizer.imageshack.com/img922/675/gt4HSQ.png)
![text](https://imagizer.imageshack.com/img923/4973/PMeowj.png)

 
 
 
 

2. **БЛОК-СХЕМА ПРОГРАМИ** 
![text](https://imagizer.imageshack.com/img923/4845/LbpgZT.png)
 
Рисунок 1 – блок-схема алгоритму
3. **ДОКУМЕНТАЦІЯ В DOXYGEN**
![text](https://imagizer.imageshack.com/img924/8217/chBzfs.png)
![text](https://imagizer.imageshack.com/img923/1812/V6znAS.png)
![text](https://imagizer.imageshack.com/img924/2935/c4IvKL.png)
 
 
 
Рисунки 2-4 – Документація Doxygen

4. **ТЕКСТ ПРОГРАМИ**
Текст файлу main.c
```#include <locale.h>

#include <stdarg.h>
#include <stdio.h>

/**
*Labrab07
*\author Rossiyskiy D.
*\version 1.0
*/

/**
*\brief Function that resolves Lab07 task.
*\version 1.0
*
*\return Numbers of pairs 



*<param name="res">Result </param>
*<param name="num1"> First number to compare</param>
*<param name="num2"> Second number to compare</param>
*<param name="va_start"> Start of a function with variative args</param>
*<param name="for"> Cycle for compairing numbers</param>
*<param name="va_end">End of a function with variative args</param>
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
    Comparefunc(1, 2, 3;
    comparefunc(9,10);
    comparefunc(12, 34, 56,78);
}
```


5. **РЕЗУЛЬТАТ**
![text](https://imagizer.imageshack.com/img923/5404/zvvTuC.png)
 
Рисунок 5 – результат роботи програми
6. **ВИСНОВОК**
На даних лабораторних роботах здобули практичні навички з тем :
Функції; Вступ до блок-схем алгоритмів; Вступ до документації коду.







