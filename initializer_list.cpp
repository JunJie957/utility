#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int a{100};
  std::cout << "a = " << a << std::endl;

  vector<int> v{1, 2 ,3, 4, 5};
  std::cout << "v.front() = " << v.front() << ", v.back() = " << v.back() << std::endl;

  vector<string> s{"1", "2", "3"};
  std::cout << "s.front() = " << s.front() << ", s.back() = " << s.back() << std::endl;

  return 0;
}
