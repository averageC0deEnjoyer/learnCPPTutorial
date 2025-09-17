#include <iostream>

int five()
{
  return 5;
}

int main()
{
  constexpr int testVariable{five()};
  std::cout << testVariable;
  return 0;
}
