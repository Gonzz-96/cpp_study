#include <iostream>
#include "person.h"

Person::Person(string name, int age) :
    _name{name},
    _age{age} {

    std::cout << "Object initialized!\n";
};

string Person::getName() { return _name; }
int Person::getAge() { return _age; }