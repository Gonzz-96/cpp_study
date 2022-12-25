#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Vector {
public:
    using value_type = T;
};

template<typename C>
using Element_type = typename C::value_type;

template<typename Container>
void algo(Container& c)
{
    Vector<Element_type<Container>> vec;
}

void use()
{
    Vector<int> v;
}

template<typename Key, typename Value>
class Map {

};

template<typename Value>
using String_map = Map<string, Value>;

void user_user()
{
    String_map<int> m;
}