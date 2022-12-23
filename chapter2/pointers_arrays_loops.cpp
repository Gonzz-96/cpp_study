
#include <iostream>

constexpr int number_of_elements();

void random_function()
{
    char v[6];

    char* p = 0;
    p = &v[3];

    char x = *p;
}

void copy_fct()
{
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];

    for (auto i = 0; i != 10; i++) {
        v2[i] = v1[i];
    }
}

void print()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x : v) {
        std::cout << x << '\n';
    }
}

constexpr int number_of_elements() { return 5; }

void increment() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x : v) {
        std::cout << x << '\n';
    }

    for (auto& x : v) {
        std::cout << x << '\n';
        x++;
    }

    for (auto x : v) {
        std::cout << x << '\n';
    }
}

void null_pointers()
{
    double* pd = nullptr;
    int* x = nullptr;
}

int count_x(const char* p, char x)
{
    if (p == nullptr) return 0;
    int count = 0;
    for (; *p != 0; ++p) {
        if (*p == x) {
            ++count;
        }
    }
    return count;
}

int main() {
    // print();
    increment();
}