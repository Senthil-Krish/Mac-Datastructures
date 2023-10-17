//
//  ListCabinate.hpp
//  DataStructures
//
//  Created by Senthil on 15/10/23.
//

#ifndef ListCabinate_hpp
#define ListCabinate_hpp

#include <stdio.h>
#include "iostream"
#include "SinglyLinkedList.hpp"
using namespace std;

class ListCabinate
{
    LinkedList *lList;
public:
    void enterIntoListWorld()
    {
        cout << "Enter list type:" << endl;
        cout << "1. Singly Linked List" << endl;
        int lType = 0;
        cin >> lType;
        int operation = 0;
        switch (lType)
        {
            case 1:
            {
                cout << "Singly Linked List chosen" << endl;
                lList = new SinglyLinkedList();
                break;
            }
            default:
                break;
        }
        
        int data = 0, index = 0;
        
        do
        {
            cout << "Select Operation:" << endl;
            cout << "1. Add front" << endl;
            cout << "2. Add at end" << endl;
            cout << "3. Add at index" << endl;
            cout << "4. Remove front" << endl;
            cout << "5. Remove last" << endl;
            cout << "6. Remove at index" << endl;
            cout << "0. Quit" << endl;
            cin >> operation;

            switch (operation)
            {
                case 1:
                {
                    int count;
                    cout << "Enter number of elements: " << endl;
                    cin >> count;
                    for(int i = 0; i < count; i++)
                    {
                        cout << "Enter value: ";
                        cin >> data;
                        lList->addAtFirst(data);
                    }
                    break;
                }
                case 2:
                {
                    int count;
                    cout << "Enter number of elements: " << endl;
                    cin >> count;
                    for(int i = 0; i < count; i++)
                    {
                        cout << "Enter value: ";
                        cin >> data;
                        lList->addAtLast(data);
                    }

                    break;
                }
                case 3:
                {
                    cout << "Enter index:";
                    cin >> index;
                    cout << "Enter value:";
                    cin >> data;
                    lList->addAtIndex(index, data);
                }
                default:
                    break;
            }
        }while(operation != 0);
        

        
        lList->print();
    }
};

#endif /* ListCabinate_hpp */
