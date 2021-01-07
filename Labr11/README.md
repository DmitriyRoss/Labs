Автор:    Російський Д., КІТ-120д
	    Дата:  25-12-2020
**Лабораторна робота № 11**
**Тема.** Вступ до показчиків
**Мета:** виконати завдання стосовно варіанту
**1. ЗАВДАННЯ ДО РОБОТИ**
Загальне завдання:
Дано масив з речовинних чисел. Підрахувати кількість ділянок, які утворюють безперервні послідовності чисел з не-зменшуваними значеннями.
**2. БЛОК-СХЕМА ПРОГРАМИ** 
 	     ![](https://imagizer.imageshack.com/img922/7829/2hRQLn.png)
 	Рисунок 1 – блок-схема алгоритму
 	
 	**3. ДОКУМЕНТАЦІЯ В DOXYGEN**
 	![](https://imagizer.imageshack.com/img922/8638/DF9nDs.png)
 	![](https://imagizer.imageshack.com/img924/5483/B2bHKH.png)
 	 
 	 
 	Рисунок 2 – Документація doxygen
**4. ТЕКСТ ПРОГРАМИ**
Текст файлу main.c
```/**
*Labrab11
*\author Rossiyskiy D.
*\version 1.0
*/
#include <stdio.h>
#include <stdlib.h>
/**
 * \brief Function that resolves Lab11 task.
 * This function creates an array of N numbers and counts a number of pairs that do not decrease
 * Procedure: 
 * Filling an array with random numbers
 * Checking for increasing pairs
 * Counting increasing pairs in s variable
 * Output 
 * */
int func()
{
    int N;
    scanf("%d", &N);
    int arr[N], s = 0, i;
    for (i = 0; i < N; i++)
        arr[i] = rand() % 100;

    for (i = 0; i < N - 2; i++)
        if ((arr[i + 1] > arr[i]) && (arr[i + 2] < arr[i + 1]))
            s += 1;

    for (i = 0; i < N; i++)
    printf("%d, ", arr[i]);
    printf("\n Number of pairs: %d", s);
}
///Main function, calling func function and returns 0;
int main()
{
    func();
    return 0;
}
```
**5. РЕЗУЛЬТАТ**
![](https://imagizer.imageshack.com/img922/9836/9iY0IE.png)

 
Рисунок 3 – результат при N=10

**6. ВИСНОВОК**
Виконали завдання стосовно варіанту.



