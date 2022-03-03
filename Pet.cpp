#include "Pet.h"
using namespace std;
#include <string>
#include <iostream>
#include <fstream>

Pet::Pet(int age, string name, string kind, string breed){
    _age = age;
    _name = name;
    _breed = breed;
    _kind = kind;
}

void Pet::say() const{
    if(_kind == "cat"){
	cout << "Mya" << endl;
    }else 
    if(_kind == "dog"){
	cout << "Bark" << endl;	
    }else{
	cout << "Ya ne znay kak ono govorit" << endl;
    }
}

void Pet::play() const{
    if(_kind == "cat"){
	cout << "Cat is playing" << endl;
    }else 
    if(_kind == "dog"){
	cout << "Dog is playing" << endl;	
    }else{
	cout << "Ono ne playing" << endl;
    }
}

void Pet::getInfo() const{
    cout << _kind << " with breed of " << _breed << " with name of " << _name << " is " << _age << " y.o." << endl;
}

string Pet::getSpicies() const{
    return _kind;
}

int Pet::getAge() const{
    return _age;
}

string Pet::getName() const{
    return _name;
}

string Pet::getBreed() const{
    return _breed;
}
