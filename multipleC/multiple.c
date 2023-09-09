#include <stdio.h>

void multiple(int grades)
{
    for(int i = 0; i < 9; i++)
    {
        printf("%d * %d = %d\n", grades, i, grades * i);
    }
}

int main()
{
    multiple(2);

    return 0;
}