#include <iostream>
#include <string>
#include <list>

namespace std {
    void say_hi()
    {
        std::cout << "hi!" << std::endl;
    }
}

using namespace std;

void use()
{
    string s {"Four legs good, two legs baaaaad!"};
    string statement {"C++ is a general-purpose programming lañguage"};
    list<string> slogans {"War is NOT peace", "Freedom", "Strength"};

    cout << statement << endl;
}
