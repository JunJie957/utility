// structured bindings only available with -std=c++17 or -std=gnu++17
// g++ structured_binding.cpp --std=c++17

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  map<string, int> m { {"xiaoming", 18}, {"xiaohu", 19}, {"xiaofang", 20} };
  for (const auto& [name, age] : m) {
    std::cout << "name = " << name << ", age = " << age << std::endl;
  }
  return 0;
}
