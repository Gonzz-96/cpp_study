#include <iostream>

using namespace std;

class Person {
public:
    Person(string, int);

    string getName();
    int getAge();

private:
    string _name;
    int _age;
};
