#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

template<class C, class Oper>
void for_all(C& c, Oper op);
void user();

template<typename T, typename... Tail>
void f(T head, Tail... tail);


template<typename T>
class Less_than {
    const T val;
public:
    Less_than(const T& v) : val{v} {}
    bool operator()(const T& x) const { return x < val; }
};

void fct(int n, const string& s)
{
    Less_than<int> lti {42};
    Less_than<string> lts {"Backus"};

    bool b1 = lti(n);
    bool b2 = lts(s);
}

template<typename C, typename P>
int count(const C& c, P pred)
{
    int cnt = 0;
    for (const auto& x : c)
        if (pred(x))
            ++cnt;
    return cnt;
}

void f(const vector<int>& vec, const list<string>& lst, int x, const string& s)
{
    cout << "Number of values less than " << x
         << ": " << count(vec, Less_than<int>{x})
         << '\n';

    cout << "Number of values less than " << s
         << ": " << count(lst, Less_than<string>{s})
         << '\n';
}

void f_with_lambdas(const vector<int>& vec, const list<string>& lst, int x, const string& s)
{
    cout << "Number of values less than " << x
         << ": " << count(vec, [&x](int a) { return a < x; })
         << '\n';

    cout << "Number of values less than " << s
         << ": " << count(lst, [&s](const string& a) { return a < s; })
         << '\n';
}

int main()
{
    f(vector<int>{1, 2, 3, 4, 10, 20, -10}, list<string>{"hello", "world"}, 10, "person");
    f_with_lambdas(
        vector<int>{1, 2, 3, 4, 10, 20, -10, -10000, 4}, 
        list<string>{"hello", "world", "persona", "equis de"}, 
        10, 
        "person"
    );

    user();
}

template<class C, class Oper>
void for_all(C& c, Oper op)
{
    for (auto& x : c)
        op(x);
}

void user()
{
    vector<string> v{
        "Hello", "Gonzalo", "Chuchin", "Travel"
    };
    for_all(v, [](string& s) { cout << "From lambda: " << s << '\n'; }) ;
    for_all(v, [](string& s) { cout << "From other lambda: " << s << '\n'; }) ;
}

template<typename T, typename... Tail>
void f(T head, Tail... tail)
{
    
}