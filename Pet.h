#ifndef PET_H
#define PET_H

using namespace std;
#include <string>
#include <iostream>
#include <fstream>

class Pet{
    private:
        string name, kind, breed;
		int age;
    public:
		Pet(int _age, string _name, string _kind, string _breed);
		void say() const;
		void play() const;
		void getInfo() const;
		string getSpicies() const;
		int getAge() const;
		string getName() const;
		string getBreed() const;
};

#endif
