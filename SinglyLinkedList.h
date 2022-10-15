#ifndef SINGLYLINKEDLIST_SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_SINGLYLINKEDLIST_H

class Node {
public:
    int key, value;
    Node* next;

    explicit Node(int key=0, int value=0, Node* next= nullptr)
            : key(key),value(value),next(next){}
};

class SinglyLinkedList {
    Node* head;
    int size;

public:
    SinglyLinkedList();

    ~SinglyLinkedList();

    void add(int key,int value);

    int pop();

    void remove(int key);

    int getValue(int key);

    int getSize();

    void print();
};


#endif //SINGLYLINKEDLIST_SINGLYLINKEDLIST_H
