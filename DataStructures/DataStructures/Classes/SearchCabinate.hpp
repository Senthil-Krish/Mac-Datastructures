//
//  SearchCabinate.hpp
//  DataStructures
//
//  Created by Senthil on 14/10/23.
//

#ifndef SearchCabinate_hpp
#define SearchCabinate_hpp

#include <stdio.h>
#include "iostream"
#include "SearchEngine.hpp"
#include "LinearSearch.hpp"
#include "BinarySearch.hpp"
#include "BinaryRecursiveSearch.hpp"

using namespace std;

class SearchCabinate
{
public:
    void searchOption()
    {
        int selector;
        cout << "Select algorithm: " << endl;
        cout << "1: Linear Search" << endl;
        cout << "2: Binary Search" << endl;
        cout << "3: Binary Recursive Search" << endl;
        cin >> selector;
        
        SearchEngine *searcher = NULL;
        
        switch (selector)
        {
            case 1:
            {
                cout << "Linear Search chosen" << endl;
                searcher = new LinearSearch();
                break;
            }
            case 2:
            {
                cout << "Binary Search chosen" << endl;
                searcher = new BinarySearch();
                break;
            }
            case 3:
            {
                cout << "Binary Recursive Search chosen" << endl;
                searcher = new BinaryRecursiveSearch();
                break;

            }

            default: break;
        }
        int count;
        cout << "Enter elements count: ";
        cin >> count;
        searcher->initialize(count);
        int value;
        cout << "Enter value to search:";
        cin >> value;
        int result = searcher->search(value);
        if(result != -1)
        {
            cout << "Value found at index " << result << endl;
        }
        else
        {
            cout << "Value not found!" << endl;
        }
    }
};

#endif /* SearchCabinate_hpp */
