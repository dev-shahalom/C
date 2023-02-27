#include <stdio.h>

int main()
{

    int arr[] = {1, 3, 5, 46, 7, 4, 3, 2, 6, 8}, i;
    int given = 5;
    int lenght = sizeof(arr) / sizeof(int);

    int found = 0;

    for (i = 0; i < lenght; i++)
    {

        if (given == arr[i])
        {
            found = 1;
            break;
        }
        else
        {
            found = 0;
        }
    }

    if (found == 0)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at %d", i);
    }

    return 0;
}