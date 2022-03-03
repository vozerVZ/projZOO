#ifndef PET_H
#define PET_H

using namespace std;
#include <string>
#include <iostream>
#include <fstream>

class Pet{
private:
    string _name, _kind, _breed;
    int _age;
public:
    Pet(int age, string name, string kind, string breed);
    void say() const;
    void play() const;
    void getInfo() const;
    string getSpicies() const;
    int getAge() const;
    string getName() const;
    string getBreed() const;
};

#endif
