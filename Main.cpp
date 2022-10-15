#include <stdio.h>

int func(int x)
{
    switch (x)
    {
    case 15: case 16: case 17: case 18: return x;
    default: return 0;
    }
}

int main()
{

    int mass[18] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 };
    for (int i = 0; i <= 17; i++)
    {
        printf("%d ", func(mass[i]));
    }
}