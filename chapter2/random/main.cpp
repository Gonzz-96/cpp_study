#include <iostream>
#include "person.h"

using namespace std;

int main() {
    Person me("Gonzalo", 26);

    cout << me.getName() << '\n';
    cout << me.getAge() << '\n';
}