#include <stdio.h>

int ticketfunc()
{
    int a;
    int b;
    int num[6] = {1, 1, 1, 1, 1, 1};
    char win[] = "Congrats! Your ticket is lucky!";
    char lose[] = "We are really sorry. Try again!";
    for (int i = 0; i < 3; i++)
    {
        a = a + num[i];
    }
    for (int i = 0; i < 6; i++)
    {
        b = b + num[i];
    }
    a *= 2;
    if (a == b)
    {
        return printf("%s", win);
    }
    else
    {
        return printf("%s", lose);
    }
}
int main()
{
    int res = ticketfunc();
    printf("%d\n", res);
    return 0;
}
