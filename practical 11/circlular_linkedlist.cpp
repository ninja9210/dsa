#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct nodee
{
    int data;
    nodee *next;
    nodee *prev;
} node;
node *addnode(node *);
void shownodes(node *);
node *delete_node(node *);
node *head;
int main()
{
    int ch;
    ch = 1;
    head = NULL;
    while (ch != 0)
    {
        cout << "\nMENU\n";
        cout << "\t1.ADD A NODE\n";
        cout << "\t2.DISPLAY THE NODES\n";
        cout << "\t3.DELETION\n";
        cout << "\t0.QUIT\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            head = addnode(head);
            break;
        case 2:
            shownodes(head);
            break;
        case 3:
            head = delete_node(head);
            break;
        case 0:
            ch = 0;
            break;
        default:
            cout << "INVALID CHOICE ?? \n";
            break;
        }
    }
    return 0;
}
node *addnode(node *f)
{
    node *n;
    int ch;
    n = new node;
    cout << "ENTER A ELEMENT TO BE INSERTED :";
    cin >> n->data;
    n->next = n->prev = NULL;
    if (f == NULL)
    {
        f = n;
        cout << "\nLIST IS EMPTY.. NODE IS INSERTED AT THE BEGINING..\n";
    }
    else
    {
        cout << "WHERE YOU WANT TO INSERT :\n";
        cout << "From\n\t1.BEG\n\t2.END\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            n->next = f;
            f->prev = n;
            f = n;
            cout << "SUCCESS\n";
            break;
        case 2:
            node *temp;

            temp = f;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = n;
            n->prev = temp;
            cout << "SUCCESS \n";
            break;
        default:
            cout << "INVALID ??\n";
            break;
        }
    }
    return f;
}
void shownodes(node *f)
{
    node *temp = f;
    if (temp == NULL)
    {
        cout << endl
             << "EMPTY LIST ..\n";
        return;
    }
    else
    {
        cout << "HEAD";
        while (temp != NULL)
        {
            cout << " <=> ";
            cout << temp->data;
            temp = temp->next;
        }
        cout << " -> NULL " << endl;
    }
}
node *delete_node(node *f)
{
    node *temp1, *temp2;
    int ch;
    temp1 = temp2 = f;
    if (temp1 == NULL)
    {
        cout << "\nEMPTY LIST ... CANNOT BE DELETED \n";
    }
    else
    {
        cout << "From\n\t1.BEG\n\t2.END\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            f = f->next;
            cout << "SUCCESS\n";
            break;
        case 2:
            while (temp1->next != NULL)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = NULL;
            cout << "SUCCESS \n";
            break;
        default:
            cout << "INVALID ??\n";
            break;
        }
    }
    return f;
}
