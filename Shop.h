#ifndef SHOP_H
#define SHOP_H

using namespace std;
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Pet.h"

class Shop{
private:
    string _name;
    vector<Pet*> _pets;
public:
    Shop(const string& name);
    Shop(const Shop& copy_shop);
    Shop& operator=(const Shop& shp);
    Pet* get();
    void put(Pet* pet);
    void getInfo() const;
    Pet* get_by_num(int cage_num);
};

#endif
