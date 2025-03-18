#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[7], i, j, t, min;
    
    cout << "Enter the Array Elements:\n";
    for (i = 0; i <= 6; i++)
    {
        cin >> a[i];
    }
  
    for (i = 0; i <= 6; i++)
    {
        min = i;
        for (j = i + 1; j <= 6; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            t = a[min];
            a[min] = a[i];
            a[i] = t;
        }
    }
   
    cout << "After Sorting Array is:\n";
    for (i = 0; i <= 6; i++)
    {
        cout << a[i] << "\t";
    }
    getch();
}
