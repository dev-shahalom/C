#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int h)
{

    int pivot = arr[l];
    int i = l, j = h;

    while (i < j)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[l], &arr[j]);

    return j;
}

void quickSort(int arr[], int l, int h)
{

    int j, i;
    if (l < h)
    {
        j = partition(arr, l, h);
        quickSort(arr, l, j - 1);
        quickSort(arr, j + 1, h);
    }
}

int main()
{

    int arr[] = {1,43,1,2,4,6,2,4,6,4};

    int l = 0;
    int h = 9,i;

    quickSort(arr, l, h);

    for (i = l; i < h; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}