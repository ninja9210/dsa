#include <iostream.h>
#include<conio.h>
using namespace std;
int main()
{
    clrscr();
    int arr[10], tot = 10, i, elem, j, found = 0;
    cout << "Enter 10 Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    cout << "\nEnter Element to Delete: ";
    cin >> elem;
    for (i = 0; i < tot; i++)
    {
        if (arr[i] == elem)
        {
            for (j = i; j < (tot - 1); j++)
                arr[j] = arr[j + 1];
            found++;
            i--;
            tot--;
        }
    }
    if (found == 0)
        cout << "\nElement doesn't found in the Array!";
    else
        cout << "\nElement Deleted Successfully!";
    cout << endl;
    return 0;
    getch();
}
