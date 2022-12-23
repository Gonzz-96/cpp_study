#include <iostream>

using namespace std;

class Person {
public:
    string sayHi() { return "Hi!"; }
};

int main()
{
    Person p1;
    // cout << &p1 << '\n';

    auto p2 = p1;
    // cout << &p2 << '\n';

    Person* p3 = &p2;
    // cout << p3 << '\n';
    // cout << p3 << '\n';

    Person& p4 = p1;
    // cout << &p4 << '\n';

    Person& p5 = p1;
    cout << &p5 << endl;
    cout << &p1 << endl;
    p5.sayHi();
}