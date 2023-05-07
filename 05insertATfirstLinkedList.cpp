#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertBegin(Node* &head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}
int main() {
    Node* head = nullptr;
    insertBegin(head, 4);
    insertBegin(head, 3);
    insertBegin(head, 5);
    insertBegin(head, 2);
    insertBegin(head, 1);
    printList(head);
    return 0;
}
