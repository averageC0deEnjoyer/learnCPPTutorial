#include <iostream>

int plusOne()
{
  static int s_count{};
  ++s_count;
  return s_count;
}

int main()
{
  std::cout << plusOne() << '\n';
  std::cout << plusOne() << '\n';
  std::cout << plusOne() << '\n';
  return 0;
}
