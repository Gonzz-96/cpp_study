#include <iostream>
#include <string>
#include <list>
#include "templates.hpp"

using namespace std;

template<typename T>
Vector<T>::Vector(int s)
{
    if (s < 0) throw out_of_range("Negative_size");
    elem = new T[s];
    sz = s;
}

template<typename T>
Vector<T>::~Vector()
{
    delete[] elem;
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
    if (i < 0 || size() <= i)
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}


template<typename T>
int Vector<T>::size() const
{
    return sz;
}

template<typename T>
T* Vector<T>::begin(Vector<T>& v) const
{
    return &v[0];
}

template<typename T>
T* Vector<T>::end(Vector<T>& v) const
{
    return v.begin() + v.size();
}

int main() {
    Vector<char> vc(200);
    Vector<string> vs(17);
    Vector<list<int>> vli(45);
}

void write(const Vector<string>& vs)
{
    for (int i = 0; i != vs.size(); ++i)
        cout << vs[i] << endl;
    
    // for (auto& s : vs)
    //     cout << s << endl;
}

template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
    for (auto x : c)
        v += x;
    return v;
}