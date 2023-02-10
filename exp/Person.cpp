#include <cstdio>
#include <string>
#include "Person.h"

Person::Person(const std::string &name, const int age)
    : _name(name), _age(age) {};

void Person::sayHi() {
    printf("Hello, world!");
}
