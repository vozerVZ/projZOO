#ifndef PET_H
#define PET_H

using namespace std;
#include <string>
#include <iostream>

class Pet{
public:
    Pet();
    Pet(int age, const string& name, const string& breed);
    virtual void say() const = 0;
    virtual void play() const = 0;
    virtual string getSpicies() const = 0;
    void getInfo() const;
    int getAge() const;
    string getName() const;
    string getBreed() const;
private:
    string _name, _breed;
    int _age;
};

class Cat : public Pet{
private:
    static string _kind;
public:
    Cat(int age, const string& name, const string& breed);
    void play() const override;
    void say() const override;
    string getSpicies() const override;
};

class Dog : public Pet{
public:
    Dog(int age, const string& name, const string& breed);
    void play() const override;
    void say() const override;
    string getSpicies() const override;
private:
    static string _kind;
};

class Other : public Pet{
public:
    Other(int age, const string& name, const string& breed);
    void play() const override;
    void say() const override;
    string getSpicies() const override;
private:
    static string _kind;
};

#endif
