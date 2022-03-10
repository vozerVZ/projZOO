#include "Shop.h"
using namespace std;
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Pet.h"

Shop::Shop(const string& name){
    _name = name;
}

Shop::Shop(const Shop& copy_shop){
    _name = copy_shop._name;
    _pets = copy_shop._pets;
}

Shop& Shop::operator=(const Shop& shp){
    if(&shp == this){
        return *this;
    }

    _name.clear();
    _pets.clear();

    _name = shp._name;
    _pets = shp._pets;
}

bool Shop::operator==(const Shop& shp){
    if(&shp == this){
        return true;
    }
    if(_pets.size() != shp._pets.size()){
        return false;
    }
    int animals = 0;
    for(size_t i = 0; i < _pets.size(); i++){
        for(size_t j = 0; j < _pets.size(); j++){
            if(_pets[i] == shp._pets[j]){
                animals++;
            }
        }
    }
    if(animals == _pets.size()){
        return true;
    }
    return false;
}

Pet* Shop::get(){
    if (_pets.size() == 0){
        cout << "Shop is empty" << endl;
        return nullptr;
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
        return nullptr;
    }
    return _pets[cage_num];
}