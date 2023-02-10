#include <string>

class Person {
public:
  Person(const std::string &name, const int age);
  ~Person() = default;

  void sayHi();

private:
  const std::string &_name;
  const int _age;
};
