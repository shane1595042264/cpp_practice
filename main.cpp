// Simple C++ program to display "Hello World"

// Header file for input output functions

#include<fstream>
#include<iostream>
using namespace std;

// main function -


// where the execution of program begins

int main() {
    int curVal = 0, val = 0;
    if (std::cin >> curVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == curVal)
                ++cnt;
            else {
                std::cout << curVal << " occurs "
                          << cnt << " time(s)" << std::endl;
                curVal = val;
                cnt = 1;
            }
        }
        std::cout << curVal << " occurs "
                  << cnt << " time(s)" << std::endl;
    }
    return 0;
}