//
//  BinarySearch.cpp
//  DataStructures
//
//  Created by Senthil on 07/10/23.
//

#include "BinarySearch.hpp"
#include "iostream"
using namespace std;

void BinarySearch::initialize(int count)
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

int BinarySearch::search(int value)
{
    int start = 0;
    int end = elementsCount - 1;
    int mid = 0;
    
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(elements[mid] == value)
        {
            return mid;
        }
        if(elements[mid] < value)
        {
            start = mid + 1;
        }
        else if(elements[mid] > value)
        {
            end = mid - 1;
        }
    }
    
    return -1;
}


BinarySearch::~BinarySearch()
{
    delete [] elements;
}

