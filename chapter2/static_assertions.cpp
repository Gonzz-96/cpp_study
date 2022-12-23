#include <iostream>

constexpr double C = 299792.458;

void f(double speed)
{
    constexpr double local_max = 160.0 / (60 * 60);

    // static_assert(speed < C, "can't go that fast!");
    static_assert(local_max < C, "Can't go that fast!");
}

int main()
{

    static_assert(4 <= sizeof(int), "integers are too small");
    std::cout << sizeof(int);
}