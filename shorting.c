#include <stdio.h>

void main()
{
	int a[20], i, n, j, temp;

	// Input: Array Size
	printf("Enter value of n: ");
	scanf("%d", &n);

	// Input: Array Elements
	for (i = 0; i < n; i++)
	{
		printf("Enter element for a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	// Display: Before Sorting
	printf("Before sorting, the elements in the array are:\n");
	for (i = 0; i < n; i++)
	{
		printf("Value of a[%d] = %d\n", i, a[i]);
	}

	// Bubble Sort Algorithm
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				// Swap Elements
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	// Display: After Sorting
	printf("After sorting, the elements in the array are:\n");
	for (i = 0; i < n; i++)
	{
		printf("Value of a[%d] = %d\n", i, a[i]);
	}
}
