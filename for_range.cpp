#include <iostream>
#include <map>

using namespace std;

int main() {
  map<string, int> m { {"xiaoming", 18}, {"xiaohu", 19}, {"xiaofang", 20} };
  for (const auto& iter : m) {
    std::cout << "name = " << iter.first << ", age = " << iter.second << std::endl;
  }
  return 0;
}
