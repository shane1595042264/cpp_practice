
#include <fstream>
#include <iostream>
#include "Sales_item.h"
//
// Created by m1595 on 4/4/2022.
//
using namespace std;

int main() {
Sales_item total, item;
if(cin>>total){
    while(cin>>item){
        total+=item;
        cout<<total<<endl;
    }
}
    return 0;
}


