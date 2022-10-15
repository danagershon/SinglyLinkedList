#include <iostream>
#include "SinglyLinkedList.h"

int main() {
    SinglyLinkedList my_list;

    std::cout << "\nadding: " << std::endl;

    for(int i = 1; i <= 10; i++){
        my_list.add(i,i*2);
        my_list.print();
    }

    std::cout << "\npopping: " << std::endl;

    for(int i = 0; i < 4; i++){
        my_list.pop();
        my_list.print();
    }

    std::cout << "\nsize: " << my_list.getSize() << std::endl;

    std::cout << "\nremoving: " << 4 << std::endl;
    my_list.remove(4);
    my_list.print();

    std::cout << "\nremoving: " << 1 << std::endl;
    my_list.remove(1);
    my_list.print();

    std::cout << "\nkey: " << 2 << " value: " << my_list.getValue(2) << std::endl;


    return 0;
}