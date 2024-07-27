#include <iostream>
using namespace std;

// Node class represents each element in the singly linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class manages the linked list operations
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to add a node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Added " << value << " to the list." << endl;
    }

    // Function to display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
        } else {
            Node* temp = head;
            cout << "Linked List: ";
            while (temp != nullptr) {
                cout << temp->data;
                if (temp->next != nullptr) {
                    cout << " -> ";
                }
                temp = temp->next;
            }
            cout << endl;
        }
    }

    // Function to delete a node with given value from the list
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete." << endl;
            return;
}

        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head
        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Deleted " << value << " from the list." << endl;
            return;
        }

        // Traverse the list to find the node to delete
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If node with value was not found
        if (temp == nullptr) {
            cout << "Node with value " << value << " not found." << endl;
            return;
        }

        // Unlink the node from the linked list
        prev->next = temp->next;
        delete temp;
        cout << "Deleted " << value << " from the list." << endl;
    }

// Function to delete all nodes of the linked list
    void clear() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
        head = nullptr;
        cout << "List cleared." << endl;
    }
};

int main() 
{
    LinkedList list;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Append\n";
        cout << "2. Display\n";
        cout << "3. Delete Node\n";
        cout << "4. Clear\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to append: ";
                cin >> value;
                list.append(value);
                break;
            case 2:
                list.display();
break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;
            case 4:
                list.clear();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice.\n";
        }

    } while(choice != 5);

    return 0;
}