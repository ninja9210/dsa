#include <iostream.h>
#include <conio.h>
int stack[5], n = 5, top = -1;
void push(int val)
{
    cout << "\nEnter element: ";
    cin >> val;
    if (top >= n - 1)
    {
        cout << "Stack Overflow";
    }
    else
    {
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
    }
    else
    {
        cout << "\nPopped element is: 
                "<<stack[top]<<endl;
            top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "\nElements in stack are: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << "\t";
        }
    }
    else
    {
        cout << "Stack is Empty";
    }
}
int main()
{
    clrscr();
    int ch, val;
    cout << "1) push element into stack" << endl;
    cout << "2) pop from stack" << endl;
    cout << "3) display stack" << endl;
    cout << "4) exit" << endl;
    do
    {
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Innvalid Choice";
        }
    } while (ch != 4);
    getch();
}