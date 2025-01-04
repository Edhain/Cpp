#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

int calSize(Node* node) {
    int size = 0;

    while (node != NULL) {
        node = node->next;
        size ++;
    }
    return size;
}

void insertStart(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head; // pointer dereference

    *head = newNode;
}

void insertLast(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    // if no node is present
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void insertPosition(int pos, int data, Node** head) {
    int size = calSize(*head);

    if (pos < 1 || size < pos) {
        cout << "Can't insert, " << size << " is not a valid position" << endl;
    } else {
        Node *temp = *head;
        Node *newNode = new Node();

        newNode->data = data;
        newNode->next = NULL;

        while (--pos) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void display(Node* node) {
    //as linked list will end when Node is Null
    while (node != NULL) {
        cout << node -> data << " ";
        node = node -> next;
    }
    cout << endl;
}

void deleteNode(Node **head, int delval) {
    Node *temp = new Node();
    temp = *head;
    Node *previous = new Node();

    // case when only 1 node present in list
    if (temp->next == NULL) {
        *head = NULL;
        free(temp);
        cout << "Value deleted: " << delval << endl;
        return;
    }

    // if head node itself needs to be deleted
    if (temp != NULL && temp->data == delval) {
        *head = temp->next;
        cout << "Value deleted: " << delval << endl;
        free(temp);
        return;
    }

    //run until we find the value to be deleted in the list
    while (temp != NULL && temp->data != delval) {
        previous = temp;
        temp = temp->next;
    }

    //if value is not present then temp will have traversed to last node NULL
    if (temp == NULL) {
        cout << "Value not found" << endl;
        return;
    }

    previous->next = temp->next;
    free(temp);
    cout << "Value deleted: " << delval << endl;
}

int main() {
    Node* head = NULL;

    insertStart(&head, 12);
    insertStart(&head, 16);
    insertStart(&head, 20);

    insertLast(&head, 10);
    insertLast(&head, 14);
    insertLast(&head, 18);
    insertLast(&head, 11);

    //Inserts after 3rd position
    insertPosition(3, 22, &head);

    printf("Linked List Before Operations : ");
    display(head);

    //deleting first occurance of a value in linked list
    deleteNode(&head, 22);
    deleteNode(&head, 20);
    deleteNode(&head, 12);
    deleteNode(&head, 2);

    printf("Linked List After Operations : ");
    display(head);

    return 0;
}