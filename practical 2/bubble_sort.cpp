#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[10] = {25, 18, 6, 2, 8, 12, 23, 55, 34, 41};
    int i, j, t;
    // print array elements before sorting
    cout << "\nArray Elements Before Sorting are:\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    // sort the array using bubble sort
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    // print the sorted list
    cout << "\nArray Elements after Sorting are:\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    getch();
}
