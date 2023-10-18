//
//  SinglyLinkedList.cpp
//  DataStructures
//
//  Created by Senthil on 14/10/23.
//

#include "SinglyLinkedList.hpp"
#include "iostream"

void SinglyLinkedList::addAtFirst(int data)
{
    if(head == NULL)
    {
        head = new Node();
        head->data = data;
        head->next = NULL;
        tail = head;
    }
    else
    {
        Node *newHead = new Node();
        newHead->data = data;
        newHead->next = head;
        head = newHead;
    }
}
void SinglyLinkedList::addAtLast(int data)
{
    if(head == NULL)
    {
        head = new Node();
        head->data = data;
        head->next = NULL;
        tail = head;
    }
    else
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}
void SinglyLinkedList::addAtIndex(int index, int data)
{
    if(head == NULL)
    {
        head = new SinglyLinkedList();
        head->data = data;
        head->next = NULL;
        return;
    }
    else if(index == 0)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *current = head;
    
    int counter = 0;
    do
    {
        if(counter == (index - 1))
        {
            Node *newNode = new Node();
            newNode->data = data;
            newNode->next = current->next;
            current->next = newNode;
            
            if(newNode->next == NULL)
            {
                tail = newNode;
            }
            
            return;
        }
        current = current->next;
        counter++;
    }while(current != NULL);
    
}

void SinglyLinkedList::removeAtFirst()
{
    if(head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}



void SinglyLinkedList::removeAtLast()
{
    if(head == NULL) return;
    
    if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    
    Node *theNode = head;
    
    while (theNode->next->next != NULL) {
        theNode = theNode->next;
    }
    
    delete theNode->next;
    theNode->next = NULL;
    tail = theNode;
}

void SinglyLinkedList::removeAtIndex(int index)
{
    if(head == NULL) return;

    if(index == 0 && head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    
    int counter = 0;
    
    Node *theNode = head;
    
    do
    {
        if(index == counter)
        {
            if(head == theNode)
            {
                head = theNode->next;
                delete theNode;
                return;
            }
        }
            if((index == (counter + 1)) && (theNode->next == tail))
            {
                tail = theNode;
                delete theNode->next;
                tail->next = NULL;
                return;
            }
            if(index == counter + 1)
            {
                Node *temp = theNode->next;
                theNode->next = theNode->next->next;
                delete temp;
                return;
            }
            counter++;
        theNode = theNode->next;
        
    }while(theNode->next != NULL);

}

int SinglyLinkedList::findValue(int value)
{
    int counter = 0;
    
    Node *currentNode = head;
    
    while (currentNode != NULL) {
        if(currentNode->data == value)
        {
            return counter;
        }
        currentNode = currentNode->next;
        counter++;
    }
    
    return -1;
}
                            

void SinglyLinkedList::print()
{
    Node *current = head;
    int index = 0;
    if(current != NULL)
    {
        do
        {
            std::cout << "Value at index " << index << ": " << current->data << std::endl;
            current = current->next;
            index++;
        }while(current != NULL);
    }
}
