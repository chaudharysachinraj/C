#include <stdio.h>

int main()
{
    int arr[100], n, i, j, minIndex, temp;

    // User se number of elements input lena
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Array ke elements input lena
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i; // Assume current index as minimum

        // Array ke baki elements check karna
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // Naya minimum index update karna
            }
        }
        // Swap karna agar chhota element mila ho
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // Sorted array print karna
    printf("Sorted Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
