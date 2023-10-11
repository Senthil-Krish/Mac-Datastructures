//
//  main.cpp
//  DataStructures
//
//  Created by Senthil on 06/10/23.
//

#include <iostream>
#include "Classes/SearchEngine.hpp"
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
    
    SearchEngine *searcher = NULL;
    
    switch (selector) 
    {
        case 1:
        {
            int count;
            cout << "Linear Search chosen" << endl;
            searcher = new LinearSearch();
            break;
        }
        case 2:
        {
            int count;
            cout << "Binary Search chosen" << endl;
            searcher = new BinarySearch();
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
    
    return 0;
}
