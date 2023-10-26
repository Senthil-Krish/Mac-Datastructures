//
//  MergeSort.cpp
//  DataStructures
//
//  Created by Senthil on 21/10/23.
//

#include "MergeSort.hpp"
#include "iostream"

int* Merge(int *lList, int *rList, int lCount, int rCount)
{
    int totalSize = lCount + rCount;
    int *mList = new int[totalSize];

    int counter = 0;
    int i = 0;
    for(; i < lCount; i++)
    {
        if(lList[i] <= rList[i])
        {
            mList[counter] = lList[i];
            mList[counter + 1] = rList[i];
        }
        else
        {
            mList[counter] = rList[i];
            mList[counter + 1] = lList[i];
        }
        counter += 2;
    }
    
    if(lCount > rCount)
    {
        mList[totalSize - 1] = lList[i];
    }
    else if(lCount < rCount)
    {
        mList[totalSize - 1] = rList[i];
    }
    
    //if()
    
    delete [] lList;
    delete [] rList;
    return  mList;
}

int*  Split(int *list, int start, int end)
{
    int mid = (start + end) / 2;
    if(mid == 0)
    {
        return list;
    }
    int leftSize = mid;
    int *leftList = new int[leftSize];
    
    int rightSize = end - mid;
    int *rightList = new int[rightSize];
    memcpy(leftList, list, sizeof(int) * leftSize);
    memcpy(rightList, list + mid, sizeof(int) * rightSize);
    
    int *sListL = Split(leftList, 0, (leftSize));
    int *sListR = Split(rightList, 0, (rightSize));
    
    return Merge(sListL, sListR, leftSize,  rightSize);
}


int* MergeSort::sort(int *list, int count)
{
    
    return Split(list, 0, count);
}
