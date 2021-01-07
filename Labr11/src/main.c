/**
*Labrab07
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