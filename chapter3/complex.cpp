
class complex {
    double re, im;

public:
    complex(double r, double i) : re{r}, im{i} {};
    complex(double r) : re{r}, im{0.0} {};
    complex() : re{0.0}, im{0.0} {};

    double real() const { return re; }
    void real(double d) { re = d; }
    double imag() const { return im; }
    void imag(double d) { im = d; }

    complex& operator+=(complex z);
    complex& operator-=(complex z);

    complex& operator*(complex z);
    complex& operator+(complex z);


    complex& operator*=(complex);
    complex& operator/=(complex);

    bool operator==(complex b)
    {
        return (this->real() == b.real()) && (this->imag() == b.imag());
    }

    bool operator!=(complex z)
    {
        return *this != z;
    }
};

// defining interface outside class definition
complex& complex::operator+=(complex z) { re += z.re; im += z.im; return *this; }
complex& complex::operator-=(complex z){ re -= z.re; im -= z.im; return *this; }

complex& complex::operator*=(complex z) { return *this; }
complex& complex::operator/=(complex z) { return *this; }

void f(complex z)
{
    complex a {2.3};
    // complex b {1/a};
    complex c {a + z * complex{1, 2.3}};

    if (c != a) {
        // c = -(b / a) + 2 * b;
    }
}