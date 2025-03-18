#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[7], i, j, t;

    cout << "Enter the Array Elements:\n";
    for (i = 0; i <= 6; i++)
    {
        cin >> a[i];
    }
  
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    
    cout << "After Sorting Array is:\n";
    for (i = 0; i <= 6; i++)
    {
        cout << a[i] << "\t";
    }
    getch();
}
