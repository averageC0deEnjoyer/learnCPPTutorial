#include <iostream>
#include <string_view>

void printString(std::string_view str)
{
  std::cout << str << '\n';
}

int main()
{
  std::string name{"name test"};
  printString(name);
  return 0;
}
