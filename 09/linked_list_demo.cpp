#include <iostream.h>
#include <conio.h>
struct Node
{
    int num;
    Node *next;
};
struct Node *head = NULL;
void insert_Node(int n)
{
    struct Node *new_node = new Node;
    new_node->num = n;
    new_node->next = head;
    head = new_node;
}
void deletenode()
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
void display()
{
    cout << "\nThe list contains the data:\n";
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->num << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    clrscr();
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    display();
    deletenode();
    cout << "List after deleting the node: ";
    display();
    getch();
}