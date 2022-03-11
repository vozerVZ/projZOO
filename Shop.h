#ifndef SHOP_H
#define SHOP_H

using namespace std;
#include <string>
#include <vector>
#include <iostream>
#include "Pet.h"

class Shop{
public:
    Shop(const string& name);
    Shop(const Shop& copy_shop);
    bool operator==(const Shop& shp);
    Shop& operator=(const Shop& shp);
    Pet* operator[](int id);
    void operator()();
    void operator<<(Pet* pet);
    Pet* get();
    void put(Pet* pet);
private:
    string _name;
    vector<Pet*> _pets;
};

#endif
