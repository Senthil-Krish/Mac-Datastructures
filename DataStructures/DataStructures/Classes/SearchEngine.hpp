//
//  SearchEngine.hpp
//  DataStructures
//
//  Created by Senthil on 10/10/23.
//

#ifndef SearchEngine_hpp
#define SearchEngine_hpp

#include <stdio.h>

class SearchEngine
{
protected:
    int *elements;
    int elementsCount;
public:
    virtual void initialize(int count) = 0;
    virtual int search(int value) = 0;
};


#endif /* SearchEngine_hpp */
