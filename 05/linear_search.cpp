#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[10], i, n, flag;
    cout << "Enter 10 array elements\n";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "\n Enter the Element to search:";
    cin >> n;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Element found at position:" << i;
    }
    else
    {
        cout << "Element not found";
    }
    getch();
}
