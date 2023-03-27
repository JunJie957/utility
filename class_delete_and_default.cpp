#include <iostream>

using namespace std;

class A {
public:
  A() = default; 
  ~A() = default;

  A(const int& x) {
    this->x = x;
  }
  
  int GetNum() {
    return this->x;
  }

private:
  A(const A& a) = delete;
  A& operator=(const A& a) = delete;

  int x;
};

int main() {
  A a(std::move(100));
  std::cout << a.GetNum() << std::endl;
  
  // A b = a; // error, not allow
  // A c(a);  // error, not allow
  return 0;
}
