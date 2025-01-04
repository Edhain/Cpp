#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

class LinkedList {
    private:
        Node *head;
    public:
        LinkedList() {
            head = NULL;
        }
    int calSize();
    void insertStart(int data);
    void insertLast(int data);
    void insertPosition(int pos, int data);
    void display();
};

int LinkedList::calSize() {
    Node *node = new Node();
    node = head;
    
    int size = 0;

    while (node != NULL) {
        node = node->next;
        size ++;
    }
    return size;
}

void LinkedList::insertStart(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;

    head = newNode;
}

void LinkedList::insertLast(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
}

void LinkedList::insertPosition(int pos, int data){
    int size = calSize();

    if (pos < 1 || size < pos) {
        cout << "Can't insert, " << size << " is not a valid position" << endl;
    } else {
        Node *temp = head;
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

void LinkedList::display() {
    Node *node = new Node();
    node = head;

    while (node != NULL){
        cout << node -> data << " ";
        node = node -> next;
    }
    cout << endl;
}

int main() {
    LinkedList *list = new LinkedList();

    list -> insertStart(12);
    list -> insertStart(16);
    list -> insertStart(20);

    list -> insertLast(10);
    list -> insertLast(14);
    list -> insertLast(18);
    list -> insertLast(11);

    //Inserts after 3rd position
    list -> insertPosition(3, 25);

    /*No need for & i.e. address as we do not
    need to change head address
    */
    list -> display();
    return 0;
}