#include <stdio.h>
void SSort(int arr[], int size);
int GettingTheIndexOfMaxValue(int arr[], int startindex, int lastindex);
void swap(int arr[], int first, int second);
int main()
{
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    SSort(arr, size);

    printf("After Selection Sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("\t\t%d", arr[i]);
    }

    return 0;
}
void SSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int lastindex = size - i - 1;
        int maxindex = GettingTheIndexOfMaxValue(arr, 0, lastindex);
        swap(arr, maxindex, lastindex);
    }
}
int GettingTheIndexOfMaxValue(int arr[], int startindex, int lastindex)
{
    int maxelementindex = startindex;

    for (int i = 0; i <= lastindex; i++)
    {
        if (arr[i] > arr[maxelementindex])
        {
            maxelementindex = i;
        }
    }

    return maxelementindex;
}
void swap(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}