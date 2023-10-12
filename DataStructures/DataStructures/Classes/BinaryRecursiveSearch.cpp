//
//  BinaryRecursiveSearch.cpp
//  DataStructures
//
//  Created by Senthil on 11/10/23.
//

#include "BinaryRecursiveSearch.hpp"
#include "iostream"
using namespace std;

void BinaryRecursiveSearch::initialize(int count)
{
    elementsCount = count;
    elements = new int[elementsCount];
    cout << "Enter values in ascending order: " << endl;
    for(int i = 0; i < elementsCount; i++)
    {
        cout << "Enter value for index " << i << ":";
        cin >> elements[i];
    }
}

int BinaryRecursiveSearch::searchRecursively(int startIndex, int endIndex, int value)
{
    int midVal = (startIndex + endIndex) / 2;
    
    if(endIndex < startIndex)
    {
        return -1;
    }
    if(elements[midVal] == value)
    {
        return midVal;
    }
    else if(value < elements[midVal])
    {
        return searchRecursively(startIndex, midVal - 1, value);
    }
    else if(value > elements[midVal])
    {
        return searchRecursively(midVal + 1, endIndex, value);
    }
    return - 1;
}
int BinaryRecursiveSearch::search(int value)
{
    return searchRecursively(0, elementsCount - 1, value);
}
