#include <stdio.h>
int main()
{
    printf("Before For Loop\n");

    int j;
    scanf("%d", &j);
    for (int i = 0; i < j; i++)
    {
    printf("Allah Riponer joldi biye hok. Amin(%d)\n", i + 1);
    }
    printf("After for loop\n");

    return 0;
}