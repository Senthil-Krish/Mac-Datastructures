//
//  BinarySearch.hpp
//  DataStructures
//
//  Created by Senthil on 07/10/23.
//

#ifndef BinarySearch_hpp
#define BinarySearch_hpp

#include <stdio.h>

class BinarySearch
{
private:
    int *elements;
    int elementsCount;
    void getStartAndEndIndex(int midIndex, int &startIndex, int &endIndex);
public:
    BinarySearch(int count);
    ~BinarySearch();
    int findIndex(int value);
};

#endif /* BinarySearch_hpp */
