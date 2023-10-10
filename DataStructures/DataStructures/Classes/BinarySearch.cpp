//
//  BinarySearch.cpp
//  DataStructures
//
//  Created by Senthil on 07/10/23.
//

#include "BinarySearch.hpp"
#include "iostream"
using namespace std;
BinarySearch::BinarySearch(int count)
{
    elementsCount = count;
    elements = new int[elementsCount];
    cout << "Enter values in ascending order" << endl;
    for(int i = 0; i < elementsCount; i++)
    {
        cout << "Enter value for index " << i << ":";
        cin >> elements[i];
    }
}

BinarySearch::~BinarySearch()
{
    delete [] elements;
}

int BinarySearch::findIndex(int value)
{
    int mid = 0;
    int startIndex = 0;
    int endIndex = elementsCount - 1;

    
    while(startIndex <= endIndex)
    {
        mid = (startIndex + endIndex) / 2;
        if(elements[mid] == value)
        {
            return mid;
        }
        
        if(elements[mid] >= value)
        {
            endIndex = mid - 1;
        }
        else if(elements[mid] <= value)
        {
            startIndex = mid + 1;
        }
    }
    
    return -1;
}
