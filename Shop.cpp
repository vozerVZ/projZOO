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

Pet* Shop::get(){
    if (_pets.size() == 0){
        cout << "Shop is empty" << endl;
        //Добавить какой-то возврат
    }
    Pet* result = _pets.back();
    _pets.pop_back();
    return result;
}

void Shop::put(Pet* pet){
    _pets.push_back(pet);
}

void Shop::getInfo() const{
    cout << "I am " << _name << " in me " << _pets.size() << " animals" << endl;
}

Pet* Shop::get_by_num(int cage_num){
    if (cage_num < 0 || cage_num > _pets.size()){
        cout << "This cage is empty" << endl;
        //Добавить какой-то возврат
    }
    return _pets[cage_num];
}