#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[10] = {25, 18, 6, 2, 8, 12, 23, 55, 34, 41};
    int i, j, temp;
    
    cout << "\nArray Elements Before Sorting are:\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
 
    for (i = 1; i < 10; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    cout << "\nArray Elements after Sorting are:\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    getch();
}
