#include <iostream>

using namespace std;

class A {
public:
  virtual void test() {}
};

class B : A {
public:
  void test() override {}; // override class A test function
  void test(int x) override {}; // error, ‘void B::test(int)’ marked ‘override’, but does not override
};

int main() {

  return 0;
}
