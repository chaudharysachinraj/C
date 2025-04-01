#include <stdio.h>
void main()
{
    int b = 4, i, flag = 0;
    int a[10] = {1, 2, 34, 5, 10, 3, 12};

    for (i = 0; i < 10; i++)
    {

        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < 7; i++)
    {
        if (a[i] == b)
        {
            flag = flag + 1;
        }
    }
    if (flag == 1)
    {
        printf("Element %d is Found\n", b);
    }
    else
    {
        printf("Element %d not found\n", b);
    }
}
