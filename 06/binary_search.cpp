#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a[10], i, n, low = 0, high = 9, mid;
    cout << "Enter Array Elements: \n";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "\nEnter the Element to search\n";
    cin >> n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == n)
        {
            cout << "Element found at position: " << mid;
            break;
        }
        else if (n < a[mid])
        {
            high = mid - 1;
        }
        else if (n > a[mid])
        {
            low = mid + 1;
        }
    }
    if (low > high)
    {
        cout << "Element Not Found";
    }
    getch();
}