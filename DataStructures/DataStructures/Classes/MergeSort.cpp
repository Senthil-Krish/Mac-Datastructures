//
//  MergeSort.cpp
//  DataStructures
//
//  Created by Senthil on 21/10/23.
//

#include "MergeSort.hpp"
#include "iostream"
using namespace std;

void MergeSort::Merge(int *lList, int start, int mid, int end, int *temp)
{
    int sz1 = mid + 1 - start;
    int sz2 = end - mid;
    
    for(int i = 0; i < sz1; i++)
        temp[i] = lList[i + start];
    for(int i = 0; i < sz2; i++)
        temp[i + sz1] = lList[i + mid + 1];
    
    cout << "Size: " << sz1 + sz2 << endl;
    cout << "values: " << endl;
    for(int i = 0; i < sz1 + sz2; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    
    int l = 0, r = sz1, a = start;
    
    while(l < sz1 && r < sz1 + sz2)
    {
        if(temp[l] < temp[r])
        {
            lList[a++] = temp[l++];
        }
        else
        {
            lList[a++] = temp[r++];
        }
    }
    
    while(l < sz1)
        lList[a++] = temp[l++];
    
    while (r < sz1 + sz2) {
        lList[a++] = temp[r++];
    }
    
}

void MergeSort::Split(int *list, int start, int end, int *temp)
{
    if(start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    Split(list, start, mid , temp);
    Split(list, mid + 1, end, temp);
    Merge(list, start, mid, end, temp);

}


int* MergeSort::sort(int *list, int count)
{
   // mList = new int[count];
    int *temp = new int[count];
    Split(list, 0, count - 1, temp);
    return list;
}
