#include <iostream>
using namespace std;

class node {
public:
    node *prev;
    node *next;
    int data;
};

class DLList {
    node *head;
public:
    DLList() : head(nullptr) {}
    void insertion_beginning();
    void insertion_last();
    void insertion_specified();
    void deletion_beginning();
    void deletion_last();
    void deletion_specified();
    void display();
    void search();
};

void DLList::insertion_beginning() {
    node *ptr = new node;
    int item;
    if (!ptr) {
        cout << "\nOVERFLOW";
    } else {
        cout << "\nEnter Item value: ";
        cin >> item;
        ptr->data = item;
        ptr->prev = nullptr;
        ptr->next = head;
        if (head != nullptr) {
            head->prev = ptr;
        }
        head = ptr;
        cout << "\nNode inserted\n";
    }
}

void DLList::insertion_last() {
    node *ptr = new node;
    int item;
    if (!ptr) {
        cout << "\nOVERFLOW";
    } else {
        cout << "\nEnter value: ";
        cin >> item;
        ptr->data = item;
        ptr->next = nullptr;
        if (head == nullptr) {
            ptr->prev = nullptr;
            head = ptr;
        } else {
            node *temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
        }
        cout << "\nNode inserted\n";
    }
}

void DLList::insertion_specified() {
    node *ptr = new node;
    int item, loc;
    if (!ptr) {
        cout << "\nOVERFLOW";
    } else {
        cout << "\nEnter the location: ";
        cin >> loc;
        node *temp = head;
        for (int i = 0; i < loc; ++i) {
            temp = temp->next;
            if (temp == nullptr) {
                cout << "\nThere are less than " << loc << " elements.";
                return;
            }
        }
        cout << "Enter value: ";
        cin >> item;
        ptr->data = item;
        ptr->next = temp->next;
        ptr->prev = temp;
        if (temp->next != nullptr) {
            temp->next->prev = ptr;
        }
        temp->next = ptr;
        cout << "\nNode inserted\n";
    }
}

void DLList::deletion_beginning() {
    if (head == nullptr) {
        cout << "\nUNDERFLOW";
    } else {
        node *ptr = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete ptr;
        cout << "\nNode deleted\n";
    }
}

void DLList::deletion_last() {
    if (head == nullptr) {
        cout << "\nUNDERFLOW";
    } else if (head->next == nullptr) {
        delete head;
        head = nullptr;
        cout << "\nNode deleted\n";
    } else {
        node *ptr = head;
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->prev->next = nullptr;
        delete ptr;
        cout << "\nNode deleted\n";
    }
}

void DLList::deletion_specified() {
    if (head == nullptr) {
        cout << "\nUNDERFLOW";
        return;
    }
    int val;
    cout << "\nEnter the data after which the node is to be deleted: ";
    cin >> val;
    node *ptr = head;
    while (ptr != nullptr && ptr->data != val) {
        ptr = ptr->next;
    }
    if (ptr == nullptr || ptr->next == nullptr) {
        cout << "\nCan't delete\n";
    } else {
        node *temp = ptr->next;
        ptr->next = temp->next;
        if (temp->next != nullptr) {
            temp->next->prev = ptr;
        }
        delete temp;
        cout << "\nNode deleted\n";
    }
}

void DLList::display() {
    node *ptr = head;
    cout << "\nPrinting values...\n";
    while (ptr != nullptr) {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL\n";
}

void DLList::search() {
    if (head == nullptr) {
        cout << "\nEmpty List\n";
        return;
    }
    int item, i = 0;
    bool found = false;
    cout << "\nEnter item which you want to search: ";
    cin >> item;
    node *ptr = head;
    while (ptr != nullptr) {
        if (ptr->data == item) {
            cout << "\nItem found at location " << i + 1 << "\n";
            found = true;
            break;
        }
        ++i;
        ptr = ptr->next;
    }
    if (!found) {
        cout << "\nItem not found\n";
    }
}

int main() {
    DLList d;
    int choice = 0;
    while (true) {
        cout << "\n**Main Menu\n";
        cout << "\nChoose one option from the following list ...\n";
        cout << "\n===============================================\n";
        cout << "\n1.Insert in beginning\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                d.insertion_beginning();
                break;
            case 2:
                d.insertion_last();
                break;
            case 3:
                d.insertion_specified();
                break;
            case 4:
                d.deletion_beginning();
                break;
            case 5:
                d.deletion_last();
                break;
            case 6:
                d.deletion_specified();
                break;
            case 7:
                d.search();
                break;
            case 8:
                d.display();
                break;
            case 9:
                exit(0);
                break;
            default:
                cout << "Please enter a valid choice.\n";
        }
    }
    return 0;
}