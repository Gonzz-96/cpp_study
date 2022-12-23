#include <iostream>
#include "Vector.h"

// double sqrt(double);


// // definitions:

// double sqrt(double d) 
// {
//     return d;
// }

Vector::Vector(int s) :
    elem{new double[s]},
    sz{s} {};

double& Vector::operator[](int i)
{
    throw std::out_of_range{"Vector::operator[]"};
    return elem[i];
}

int Vector::size()
{
    return sz;
}

int main()
{
    try {
        Vector(10)[0];
    }
    catch(std::out_of_range) {
        std::cout << "Caught exception!";
    }
}