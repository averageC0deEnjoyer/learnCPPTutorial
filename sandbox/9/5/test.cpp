#include <iostream>
#include <limits>

int main()
{

  std::cout << sizeof(std::streamsize) << '\n';
  std::cout << std::numeric_limits<std::streamsize>::max() << '\n';
  std::cout << std::numeric_limits<int>::max() << '\n';
  std::cout << std::numeric_limits<double>::max() << '\n';

  return 0;
}
