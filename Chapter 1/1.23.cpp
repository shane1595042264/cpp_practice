#include <string>
#include <fstream>
#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item curItem, item;
    if(cin>>curItem){
    int cnt = 1;
    while(cin>>item){
        if(item.isbn()==curItem.isbn()){
            ++cnt;
        }

    }
    }

}

