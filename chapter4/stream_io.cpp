#include <iostream>
#include <string>

using namespace std;

struct Entry {
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\"," << e.number << "}";
}

void f()
{
    cout << 10 << endl;
}

void g()
{
    int i {10};
    cout << i << endl;
}

void h(int i)
{
    cout << "The value of i is ";
    cout << i;
    cout << '\n';
}

void h2(int i)
{
    cout << "The value of i is " << i << '\n';
}

void k()
{
    int b = 'b';
    char c = 'c';
    cout << 'a' << b << c << endl;
}

void hello()
{
    cout << "Please, enter your name: ";
    string str;
    // cin >> str;
    getline(cin, str);
    cout << "Hello, " << str << "!\n";
}

int main()
{
    // f();
    // g();
    // h(20);
    // h2(30);
    // k();

    hello();
}