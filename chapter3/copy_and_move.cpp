#include <iostream>


using namespace std;

void test(complex z1)
{
    complex z2 {z1}; // copy initialization
    complex z3;
    z3 = z2; // copy assignment
    
}