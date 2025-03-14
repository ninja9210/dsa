#include <iostream>
#include <cstring>

struct Node {
    int rollno;
    char sname[20];
    char city[20];
    char course[3];
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int rollno, const char* sname, const char* city, const char* course) {
        Node* newNode = new Node();
        newNode->rollno = rollno;
        strncpy(newNode->sname, sname, 20);
        strncpy(newNode->city, city, 20);
        strncpy(newNode->course, course, 3);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << "Roll No: " << temp->rollno << std::endl;
            std::cout << "Name: " << temp->sname << std::endl;
            std::cout << "City: " << temp->city << std::endl;
            std::cout << "Course: " << temp->course << std::endl;
            std::cout << "-------------------------" << std::endl;
            temp = temp->next;
        }
    }

    ~LinkedList() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList list;
    list.insert(1, "John Doe", "New York", "CS");
    list.insert(2, "Jane Smith", "Los Angeles", "IT");
    list.insert(3, "Mike Johnson", "Chicago", "EE");

    list.display();

    return 0;
}