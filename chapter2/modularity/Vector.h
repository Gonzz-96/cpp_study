class Vector {
public:
    Vector(int);
    double& operator[](int i);
    int size();

private:
    double* elem;
    int sz;
};