#include <iostream>
#include <vector>

using namespace std;

int main() {
  auto v2 = vector<int>{1, 2, 3};
  for (auto iter = v2.begin(); iter != v2.end(); ++iter) {
    std::cout << "num = " << *iter << std::endl;
  }
  return 0;
}
