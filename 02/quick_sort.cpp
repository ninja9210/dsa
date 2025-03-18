#include <iostream.h>
#include <conio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}
int main()
{
    clrscr();
    int arr[8] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = 8, i;
    cout << "Original array is: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "Sorted Array in Ascending Order : ";
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
    cout << endl;
    getch();
}
