//
//  BinaryRecursiveSearch.hpp
//  DataStructures
//
//  Created by Senthil on 11/10/23.
//

#ifndef BinaryRecursiveSearch_hpp
#define BinaryRecursiveSearch_hpp

#include <stdio.h>
#include "SearchEngine.hpp"

class BinaryRecursiveSearch : public SearchEngine
{
    int searchRecursively(int startIndex, int endIndex, int value);
public:
    void initialize(int count);
    int search(int value);
    ~BinaryRecursiveSearch();
};
#endif /* BinaryRecursiveSearch_hpp */
