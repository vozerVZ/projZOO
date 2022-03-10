#include "Pet.h"
using namespace std;
#include <string>
#include <iostream>
#include <fstream>

Pet::Pet(){
    _age = 0;
    _name = "a";
    _breed = "b";
}

Pet::Pet(int age, string name, string breed){
    _age = age;
    _name = name;
    _breed = breed;
}

void Pet::getInfo() const{
    cout << "Breed: " << _breed << " with name of " << _name << " is " << _age << " y.o." << endl;
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

Cat::Cat(int age, string name, string breed):Pet(age, name, breed){
    string _kind = "cat";
}

void Cat::say() {
    cout << "Myyyyyaaaau" << endl;
}

void Cat::play() {
    cout << "I'm a cat and I play" << endl;
}

Dog::Dog(int age, string name, string breed):Pet(age, name, breed){
    string _kind = "dog";
}

void Dog::play() {
    cout << "I'm a dog and I play" << endl;
}

void Dog::say() {
    cout << "Gaf gaf" << endl;
}

Other::Other(int age, string name, string breed):Pet(age, name, breed){
    string _kind = "other";
}

void Other::play() {
    cout << "I'm a other and I play" << endl;
}

void Other::say() {
    cout << "Chupapy munynya" << endl;
}