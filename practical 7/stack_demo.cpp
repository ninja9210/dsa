#include <iostream.h>
#include <conio.h>
int stack[100], n = 100, top = -1;
void push(int val)
{
    if (top >= n - 1)
        cout << "\nStack Overflow" << endl;
    else
    {
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top <= -1)
        cout << "\nStack Underflow" << endl;
    else
    {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "\nStack elements are:";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
    else
        cout << "\nStack is empty";
}
int main()
{
    clrscr();
    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "\nEnter choice: " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);
    getch();
}