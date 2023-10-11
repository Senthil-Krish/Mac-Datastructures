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
#include "SearchEngine.hpp"

using namespace std;
class LinearSearch: public SearchEngine
{
public:
    void initialize(int count);
    int search(int value);
    ~LinearSearch();

};

#endif /* LinearSearch_hpp */
