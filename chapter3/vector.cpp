#include <iostream>

class Vector {
private:
    double* elem;
    int sz;

public:
    Vector(int s) : elem{new double[s]}, sz{s}
    {
        for (int i = 0; i != s; i++) { elem[i] = 0; }
    }

    Vector(std::initializer_list<double>);
    void push_back(double);

    ~Vector() { delete[] elem; } // deallocate array

    double& operator[](int i);
    int size() const;
};

Vector::Vector(std::initializer_list<double> list) :
    elem{new double[list.size()]}, sz{list.size()}
{
    std::copy(list.begin(), list.end(), elem);
}

void fct(int n)
{
    Vector v(n);

    {
        Vector v2(2 * n);
    } // v2 is destroyed here
}// v is destroyed here

Vector read(std::istream& is)
{
    Vector v { 1, 2, 3 };
    for (double d; is >> d;) {
        v.push_back(d);
    }

    return v;
}

// class Container {
// public:
//     virtual double& operator[](int) = 0;
//     virtual int size() const = 0;
//     virtual ~Container() {};
// };

// class Vector_container : public Container 
// {
  
// };


// void user(Container& c) {
//     const int sz = c.size();

//     for (int i = 0; i != sz; i++)
//     {
//         std::cout << c[i] << '\n';
//     }
// }

int main()
{

}

