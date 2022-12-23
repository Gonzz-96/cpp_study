#include <iostream>

double square();
double sum(const std::vector<double>&);

void constant_stuff(const int age, int seconds)
{
    const int dmv = 17;
    int var = 17;
    // constexpr double max1 = 1.4 * square(dmv) // fails cause square(double) is always computed at runtime
    const double max3 = 1.4 * square();
    constexpr int seconds_in_minute = 60;
}

double square()
{

    // std::vector<double> v {1.2, 3.4, 5.6};
    return 1.2345;
}

constexpr double square(const double x) { return x * x; }

int main()
{
    std::cout << square(12);
}