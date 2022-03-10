#ifndef PET_H
#define PET_H

using namespace std;
#include <string>
#include <iostream>
#include <fstream>

class Pet{
private:
    string _name, _breed;
    int _age;
public:
    Pet();
    Pet(int age, string name, string breed);
    virtual void say() = 0;
    virtual void play() = 0;
    void getInfo() const;
    int getAge() const;
    string getName() const;
    string getBreed() const;
};

class Cat : public Pet{
private:
    string _kind;
public:
    Cat(int age, string name, string breed);
    void play() override;
    void say() override;
};

class Dog : public Pet{
private:
    string _kind;
public:
    Dog(int age, string name, string breed);
    void play() override;
    void say() override;
};

class Other : public Pet{
private:
    string _kind;
public:
    Other(int age, string name, string breed);
    void play() override;
    void say() override;
};

#endif
