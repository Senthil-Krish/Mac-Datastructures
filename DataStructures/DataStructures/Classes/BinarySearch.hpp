//
//  BinarySearch.hpp
//  DataStructures
//
//  Created by Senthil on 07/10/23.
//

#ifndef BinarySearch_hpp
#define BinarySearch_hpp

#include "SearchEngine.hpp"
#include <stdio.h>

class BinarySearch : public SearchEngine
{
public:
    void initialize(int count);
    int search(int value);
    ~BinarySearch();
};

#endif /* BinarySearch_hpp */
