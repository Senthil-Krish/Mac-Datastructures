//
//  LinearSearch.cpp
//  DataStructures
//
//  Created by Senthil on 07/10/23.
//

#include "LinearSearch.hpp"

void LinearSearch::initialize(int count)
{
    elementsCount = count;
    elements = new int[elementsCount];
    for(int i = 0; i < elementsCount; i++)
    {
        cout << "Enter value for index " << i << ":";
        cin >> elements[i];
    }
    
}

int LinearSearch::search(int value)
{
    for(int i = 0; i < elementsCount; i++)
    {
        if(elements[i] == value)
        {
            return i;
        }
    }
    return -1;
}

LinearSearch::~LinearSearch()
{
    delete [] elements;
}

