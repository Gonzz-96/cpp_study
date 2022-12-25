#include <iostream>
#include <string>

using namespace std;

string compose(const string& name, const string& domain)
{
    return name + '@' + domain;
}

void m2(string& s1, string& s2)
{
    s1 = s1 + '\n';
    s2 += '\n';
}

void substrings()
{
    string name = "Niels Stroustrup";

    string s = name.substr(6, 10); // its a copy, not view
    name.replace(0, 5, "Nicholas");
    name[0] = toupper(name[0]);

    cout << name << endl;
}

int main()
{
    cout << compose("gonzaloc", "airbnb.com") << endl;

    string s1 = "Equis de";
    string s2 = "Lol";
    m2(s1, s2);
    cout << s1;
    cout << s2 << endl;

    substrings();
}