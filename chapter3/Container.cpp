#include <iostream>
#include <string>
#include "vector"

using namespace std;

class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;
    virtual ~Container() {};

    virtual string implementation_name() = 0;

    string super_class_name() { return "Container"; }
};

class Vector_container : public Container {
    double sz;

public:
    Vector_container(double s) : sz{s} {};
    ~Vector_container() {};

    double& operator[](int i) { return sz; }
    int size() const { return sz; }
    string implementation_name() { return "Vector_container"; }
};

class Matrix_container : public Container {
    double sz;

public:
    Matrix_container(double s) : sz{s} {};
    ~Matrix_container() {};

    double& operator[](int i) { return sz; }
    int size() const { return sz; }
    string implementation_name() { return "Matrix_container"; }
};

class List_container: public Container {
    double sz;
public:
    List_container() : sz{0.0} {}
    List_container(initializer_list<double> il) {}
    ~List_container() {}

    double& operator[](int i) { return sz; }
    int size() const { return 0; }
    string implementation_name() { return "List_container"; }
};

void user(Container& c) {
    const int sz = c.size();

    for (int i = 0; i != sz; i++)
    {
        cout << c[i] << '\n';
    }
}

void impl(Container& vector, Container& matrix, Container& list)
{
    Container& c1 = vector;
    Container& c2 = matrix;
    Container& c3 = list;

    cout << c1.size() << endl;
    cout << c1.implementation_name() << endl;
    cout << c2.size() << endl;
    cout << c2.implementation_name() << endl;
    cout << c3.size() << endl;
    cout << c3.implementation_name() << endl;
}

void describe_container(Container& c)
{
    cout << c.size() << " - " << c.implementation_name() << " - " << c.super_class_name() << endl;
}

int main()
{
    Vector_container v(10);
    Matrix_container m(20);
    List_container l {1, 2 , 3};

    impl(v, m, l);

    describe_container(v);
    describe_container(m);
    describe_container(l);
}