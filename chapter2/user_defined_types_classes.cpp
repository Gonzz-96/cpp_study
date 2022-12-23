#include <iostream>

class Vector {
public:
    Vector(int s) :
        elem{new double[s]}, 
        sz{s} {
        std::cout << "Object initialized!";
    } // Construct a Vector

    double& operator[](int i) { return elem[i]; }
    int size() { return sz; }

private:
    double* elem;
    int sz;
};

int main()
{
    Vector v(6);
}