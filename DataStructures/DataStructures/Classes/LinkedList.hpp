//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Senthil on 12/10/23.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};


class LinkedList : public Node
{
protected:
    Node *head;
    Node *tail;
public:
    LinkedList();
    virtual void addAtFirst(int data) = 0;
    virtual void addAtLast(int data) = 0;
    virtual void addAtIndex(int index, int data) = 0;
    
    virtual void removeAtFirst() = 0;
    virtual void removeAtLast() = 0;
    virtual void removeAtIndex(int index) = 0;
    
    virtual int findValue(int value) = 0;
    
    virtual void print() = 0;
    
};

#endif /* LinkedList_hpp */
