//
//  LinearSearch.hpp
//  DataStructures
//
//  Created by Senthil on 07/10/23.
//

#ifndef LinearSearch_hpp
#define LinearSearch_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class LinearSearch
{
private:
    int *elements;
    int elementsCount;
public:
    LinearSearch(int count);
    ~LinearSearch();
    int findValue(int value);

};

#endif /* LinearSearch_hpp */
