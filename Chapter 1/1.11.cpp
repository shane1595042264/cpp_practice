//
// Created by m1595 on 5/3/2022.
//
#include <iostream>
using namespace std;
int main(){
    int x , y;
    cout << "Input two numbers: " << endl;
    cin >>  x >> y;
    while ( (x-y) !=  0) {
        cout << x << endl;
        if (x < y){
            x++;
        }


        else if (x >y){
            x--;
        }
        if (x == y){
            cout << x <<endl;
        }
    };

    return 0;
}
