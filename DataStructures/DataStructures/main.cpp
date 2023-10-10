//
//  main.cpp
//  DataStructures
//
//  Created by Senthil on 06/10/23.
//

#include <iostream>
#include "Classes/LinearSearch.hpp"
#include "Classes/BinarySearch.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Dastructures and Algorithms!\n";
    int selector;
    cout << "Select algorithm: " << endl;
    cout << "1: Linear Search" << endl;
    cout << "2: Binary Search" << endl;
    
    cin >> selector;
    
    switch (selector) {
        case 1:
        {
            int count;
            cout << "Linear Search chosen" << endl;
            cout << "Enter elements count: ";
            cin >> count;
            LinearSearch *lSearch = new LinearSearch(count);
            cout << "Enter value to find the index:";
            int value;
            cin >> value;
            int index = lSearch->findValue(value);
            if(index != -1)
            {
                cout << "Value found at index: " << index << endl;
            }
            else
            {
                cout << "Value not found!" << endl;
            }
            
        }
            break;
        case 2:
        {
            int count;
            cout << "Binary Search chosen" << endl;
            cout << "Enter elements count: ";
            cin >> count;
            BinarySearch *bSearch = new BinarySearch(count);
            cout << "Enter value to find the index:";
            int value;
            cin >> value;
            int index = bSearch->findIndex(value);
            if(index != -1)
            {
                cout << "Value found at index: " << index << endl;
            }
            else
            {
                cout << "Value not found!" << endl;
            }
        }
            
        default:
            break;
    }
    
    return 0;
}
