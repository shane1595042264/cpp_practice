//
// Created by m1595 on 5/3/2022.
//
#include <iostream>
using namespace std;
int main(){
    int x = 50;
    int total = 0;
    while (x <= 100) {
        total += x;
        x++;
    };
    cout << total << endl;
    return 0;
}
