#include "Shop.h"
using namespace std;
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Pet.h"

Shop::Shop(string name){
    _name = name;
}

Pet Shop::get(){
    if (_pets.size() == 0){
        cout << "Shop is empty" << endl;
        return;
    }
    Pet result = _pets.back();
    _pets.pop_back();
    return result;
}

void Shop::put(Pet* pet){
    _pets.push_back(*pet);
}