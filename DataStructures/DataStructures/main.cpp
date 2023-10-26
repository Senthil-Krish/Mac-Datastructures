//
//  main.cpp
//  DataStructures
//
//  Created by Senthil on 06/10/23.
//

#include <iostream>
#include "Classes/SearchCabinate.hpp"
#include "Classes/ListCabinate.hpp"
#include "Classes/MergeSort.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Dastructures and Algorithms!\n";
    int selector;
    cout << "Select type: " << endl;
    cout << "1. Search algorithms" << endl;
    cout << "2. Lists" << endl;
    cout << "3. Sort" << endl;
    cin >> selector;
    
    switch (selector) 
    {
        case 1:
        {
            cout << "Search Algorithms chosen" << endl;
            SearchCabinate cabinate;
            cabinate.searchOption();
            break;
        }
        case 2:
        {
            cout << "Lists chosen" << endl;
            ListCabinate lCab;
            lCab.enterIntoListWorld();
            break;
        }
        case  3:
        {
            cout << "Sort chosen" << endl;
            int count = 0;
            cout << "Enter count: ";
            cin >> count;
            int *array = new int[count];
            for(int i = 0; i < count; i++)
            {
                cout << "Enter value for index " << i << ":";
                cin >> array[i];
            }
            MergeSort mSort;
            int *sorted;
            sorted = mSort.sort(array, count);
            for(int i = 0; i < count; i++)
            {
                cout << sorted[i] << " ";
            }

        }
        default: break;
    }

    return 0;
}
