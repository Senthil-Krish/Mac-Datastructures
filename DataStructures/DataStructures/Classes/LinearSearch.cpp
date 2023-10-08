//
//  LinearSearch.cpp
//  DataStructures
//
//  Created by Senthil on 07/10/23.
//

#include "LinearSearch.hpp"

LinearSearch::LinearSearch(int count)
{
    elementsCount = count;
    elements = new int[elementsCount];
    for(int i = 0; i < elementsCount; i++)
    {
        cout << "Enter value for index " << i << ":";
        cin >> elements[i];
    }
}

LinearSearch::~LinearSearch()
{
    delete [] elements;
}

int LinearSearch::findValue(int value)
{
    for(int i = 0; i < elementsCount; i++)
    {
        if(elements[i] == value)
        {
            return i;
        }
    }
    return - 1;
}
