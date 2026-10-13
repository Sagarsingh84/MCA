#include <stdio.h>

void insertionSort(int a[], int n)
{
    int i, j, temp;

    for (i = 1; i < n; i++)
    {
        temp = a[i];

        for (j = i - 1; j >= 0 && a[j] > temp; j--)
        {
            a[j + 1] = a[j];
        }

        a[j + 1] = temp;
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[100], n, i;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    insertionSort(a, n);

    printf("Sorted array:\n");
    printArray(a, n);

    return 0;
}
