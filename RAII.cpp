// RAII : Resource Acquisition Is Initialization

#include <iostream>
#include <vector>

using namespace std;

class test {
public:
  test() {
     p = new int;
     list = new vector<int>;
     std::cout << "resource initialization" << std::endl;
  }
  ~test() {
    if (p) {
      delete(p);
      p = nullptr;
      std::cout << "release resource int" << std::endl;
    }
    if (list) {
      delete(list);
      list = nullptr;
      std::cout << "release resource vector<int>" << std::endl;
    }
  }

public:
  int* p;
  std::vector<int>* list;
};

int main() {
  test t;
  *t.p = 100;
  t.list->emplace_back(100);
  std::cout << "*t.p = " << *t.p << std::endl;
  std::cout << "t.list->front() = " << t.list->front() << std::endl;
  return 0;
}
