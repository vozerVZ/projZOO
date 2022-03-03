#include "Pet.h"
using namespace std;
#include <string>
#include <iostream>
#include <fstream>

Pet::Pet(int _age, string _name, string _kind, string _breed){
    age = _age;
    name = _name;
    breed = _breed;
    kind = _kind;
}

void Pet::say() const{
    if(kind == "cat"){
	cout << "Mya" << endl;
    }else 
    if(kind == "dog"){
	cout << "Bark" << endl;	
    }else{
	cout << "Ya ne znay kak ono govorit" << endl;
    }
}

void Pet::play() const{
    if(kind == "cat"){
	cout << "Cat is playing" << endl;
    }else 
    if(kind == "dog"){
	cout << "Dog is playing" << endl;	
    }else{
	cout << "Ono ne playing" << endl;
    }
}

void Pet::getInfo() const{
    cout << kind << " with breed of " << breed << " with name of " << name << " is " << age << " y.o." << endl;
}

string Pet::getSpicies() const{
    return kind;
}

int Pet::getAge() const{
    return age;
}

string Pet::getName() const{
    return name;
}

string Pet::getBreed() const{
    return breed;
}
