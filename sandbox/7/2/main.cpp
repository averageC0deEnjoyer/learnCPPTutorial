#include <iostream>

void print()
{
  std::cout << "print in global" << '\n';
}

namespace Foo
{
// void print()
// {
//   std::cout << "print in Foo!" << '\n';
// }
// if the above is commented, which print is going to be used?
void printHello()
{
  print();
  ::print();
}
} // namespace Foo

namespace Bar
{
void print()
{
  std::cout << "print in Bar!" << '\n';
}
} // namespace Bar
//

int main()
{
  Foo::printHello();
  return 0;
}
