#include <iostream>

template<typename T>
class Vector {
private:
    T* elem;
    int sz;

public:
    Vector(int s);
    ~Vector();

    T& operator[](int i);
    const T& operator[](int i) const;
    int size() const;

    T* begin(Vector<T>& v) const;
    T* end(Vector<T>& v) const;
};
