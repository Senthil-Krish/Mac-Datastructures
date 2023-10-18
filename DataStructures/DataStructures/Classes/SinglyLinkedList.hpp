//
//  SinglyLinkedList.hpp
//  DataStructures
//
//  Created by Senthil on 14/10/23.
//

#ifndef SinglyLinkedList_hpp
#define SinglyLinkedList_hpp

#include <stdio.h>
#include "LinkedList.hpp"
class SinglyLinkedList : public LinkedList
{
public:
    void addAtFirst(int data);
    void addAtLast(int data);
    void addAtIndex(int index, int data);
    
    void removeAtFirst();
    void removeAtLast();
    void removeAtIndex(int index);
    
    int findValue(int value);
    
    void print();
};


#endif /* SinglyLinkedList_hpp */
