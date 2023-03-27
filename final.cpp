#include <iostream>

using namespace std;

class A {
};

class B final : A {
};

class C : B { // error : cannot derive from ‘final’ base ‘B’ in derived type ‘C’
};

int main() {

  return 0;
}
