#include <iostream>

using namespace std;

// deprecated
class plan {
public:
  [[deprecated("use planB instead")]] void planA() {
    std::cout << "it's planA" << std::endl;
  }

  void planB() {
    std::cout << "it's planB" << std::endl;
  }
};

// fallthrough
class switchTest {
public:
  void t(const int& x) {
    switch(x) {
    case 1:
      std::cout << "case1" << std::endl;
      break;
    case 2:
      std::cout << "case2" << std::endl;
      [[fallthrough]]
    case 3:
      std::cout << "case3" << std::endl;
      break;
    default:
      std::cout << "default" << std::endl;
    }
  }
};

// nodiscard
class card {
public:
  [[nodiscard]] int GetPassword() {
    int password = 123456;
    return std::move(password);
  }
};

// unused variate and function
[[maybe_unused]] int age = 18;
[[maybe_unused]] void unused() {}

int main() {
  plan p;
  //p.planA(); // warnning deprecated-declarations
  p.planB(); // instead planA
 
  switchTest t;
  t.t(std::move(2)); // fallthrough 

  card c;
  //c.GetPassword(); // warnning  unused-result
  auto password = c.GetPassword();
  std::cout << "password = " << password << std::endl;
  
  return 0;
}
