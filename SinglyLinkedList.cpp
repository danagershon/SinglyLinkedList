#include "SinglyLinkedList.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList() : head(new Node()), size(0) {}

SinglyLinkedList::~SinglyLinkedList() {
    while(head){
        Node* next = head->next;
        delete head;
        head = next;
    }
}

void SinglyLinkedList::add(int key, int value) {
    Node* new_node = new Node(key,value);
    new_node->next = head->next;
    head->next = new_node;
    size++;
}

int SinglyLinkedList::pop() {
    Node* node = head->next;
    if(!node){
        return -1;
    }
    int value = node->value;
    head->next = node->next;
    delete node;
    size--;

    return value;
}

void SinglyLinkedList::remove(int key) {
    Node* curr = head;
    while(curr->next && curr->next->key != key){
        curr = curr->next;
    }

    if(!curr->next){
        return;
    }

    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    size--;
}

int SinglyLinkedList::getValue(int key) {
    Node* curr = head->next;

    while(curr && curr->key != key){
        curr = curr->next;
    }

    if(curr){
        return curr->value;
    }
    return -1;
}

int SinglyLinkedList::getSize() {
    return size;
}

void SinglyLinkedList::print() {
    Node* curr = head->next;
    std::cout << std::endl;
    while(curr){
        std::cout << "(" << curr->key << "," << curr->value << ") ";
        curr = curr->next;
    }
    std::cout << std::endl;
}
