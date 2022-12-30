/*
author:LiShendu
time:2022_12_29
context:冒泡排序
*/

#include <stdio.h>
#include <Windows.h>

void sort_print(int *arr, int count)
{
    printf("The result is:)\n");
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] >= arr[j])
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
        }
        printf("%d\t", arr[i]);
    }
}

void import(int *arr, int count)
{
    printf("please import %d value:)\n", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int arr1[5] = {0};
    int count = sizeof(arr1) / sizeof(int);

    import(arr1, count);
    printf("%d\n", count);

    sort_print(arr1, count);

    system("pause");

    return 0;
}
