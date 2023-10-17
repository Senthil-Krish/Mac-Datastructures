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
            return;
        }
        current = current->next;
        counter++;
    }while(current != NULL);
    
}

void SinglyLinkedList::removeAtFirst()
{
    
}
void SinglyLinkedList::removeAtLast()
{
    
}
void SinglyLinkedList::removeAtIndex(int index)
{
    
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
