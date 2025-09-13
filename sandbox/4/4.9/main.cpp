#include <iostream>

// int main()
// {
//   bool b1{true};
//   bool b2{false};
//   b1 = false;
//   bool b3{};
//   return 0;
// }

// int main()
// {
//   std::cout << true << '\n';
//   std::cout << false << '\n';
//   std::cout << std::boolalpha;
//   std::cout << true << '\n';
//   std::cout << false << '\n';
//   return 0;
// }

int main()
{
  bool b{};
  std::cout << "enter bool value" << '\n';

  std::cin >> std::boolalpha;
  std::cin >> b;

  std::cout << std::boolalpha;
  std::cout << "you enter" << b << '\n';
  return 0;
}
