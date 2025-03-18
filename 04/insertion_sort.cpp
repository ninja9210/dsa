#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[7], i, j, temp, min;
    
    cout << "Enter the Array Elements:\n";
    for (i = 0; i <= 6; i++)
    {
        cin >> a[i];
    }
   
    for (i = 1; i <= 6; i++)
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
   
    cout << "After Sorting Array is:\n";
    for (i = 0; i <= 6; i++)
    {
        cout << a[i] << "\t";
    }
    getch();
}
