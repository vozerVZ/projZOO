#include "Pet.h"
using namespace std;

Pet::Pet(){
    _age = 0;
    _name = "a";
    _breed = "b";
}

Pet::Pet(int age, const string& name, const string& breed){
    _age = age;
    _name.clear();
    _name = name;
    _breed.clear();
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

Cat::Cat(int age, const string& name, const string& breed):Pet(age, name, breed){
    string _kind = "cat";
}

void Cat::say() const{
    cout << "Myyyyyaaaau" << endl;
}

void Cat::play() const{
    cout << "I'm a cat and I play" << endl;
}

string Cat::getSpicies() const{
    return "cat";
}

Dog::Dog(int age, const string& name, const string& breed):Pet(age, name, breed){
    string _kind = "dog";
}

void Dog::play() const{
    cout << "I'm a dog and I play" << endl;
}

void Dog::say() const{
    cout << "Gaf gaf" << endl;
}

string Dog::getSpicies() const{
    return "dog";
}

Other::Other(int age, const string& name, const string& breed):Pet(age, name, breed){
    string _kind = "other";
}

void Other::play() const{
    cout << "I'm other and I play" << endl;
}

void Other::say() const{
    cout << "Chupapy munynya" << endl;
}

string Other::getSpicies() const{
    return "other";
}