//
//  main.cpp
//  DataStructures
//
//  Created by Senthil on 06/10/23.
//

#include <iostream>
#include "Classes/SearchCabinate.hpp"
#include "Classes/ListCabinate.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Dastructures and Algorithms!\n";
    int selector;
    cout << "Select type: " << endl;
    cout << "1. Search algorithms" << endl;
    cout << "2. Lists" << endl;
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
        default: break;
    }

    return 0;
}
