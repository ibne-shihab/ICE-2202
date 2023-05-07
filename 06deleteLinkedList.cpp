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
void deleteBegin(Node* &head) {
    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
int main() {
    Node* head = nullptr;
    insertBegin(head, 3);
    insertBegin(head, 2);
    insertBegin(head, 1);
    deleteBegin(head);
    printList(head);
    return 0;
}
