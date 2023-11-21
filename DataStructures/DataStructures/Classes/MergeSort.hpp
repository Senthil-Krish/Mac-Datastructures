//
//  MergeSort.hpp
//  DataStructures
//
//  Created by Senthil on 21/10/23.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include <stdio.h>
/*
    Goal: To sort an array of elements in ascending order
    Steps:
        1. Split the array into two halfs and keep spliting each halfs into two recursively until there is only one element left
        2. Merge the split arrays and sort them while merging, do this till all arrays are merged
        3. Final list will have the sorted elements.
 
 */

class MergeSort
{
    int *mList;
    void Merge(int *lList, int start, int mid, int end, int *temp);
    void  Split(int *list, int start, int end, int *temp);
public:
    MergeSort()
    {
        mList = NULL;
    }
    int* sort(int* list, int count);
    

};

#endif /* MergeSort_hpp */
