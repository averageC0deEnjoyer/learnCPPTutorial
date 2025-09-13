#include <cstdint>
#include <iostream>

// void print(int x)
// {
//   std::cout << "the number is " << x << '\n';
// }
//
// int main()
// {
//   print(static_cast<int>(5.5));
//   return 0;
// }
//
//
// int main()
// {
//   char ch{97};
//   std::cout << ch << '\n';
//   std::cout << static_cast<int>(ch) << '\n';
//   return 0;
// }
// int main()
// {
//   std::int8_t x{65};
//   std::cout << x << '\n';
// }
//
// int main()
// {
//   std::cout << "Enter a single character:\n";
//   char ch{};
//   std::cin >> ch;
//
//   std::cout << "You entered '" << ch
//             << "' which has ASCII code: " << static_cast<int>(ch) << '\n';
//
//   return 0;
// }
int main()
{
  std::cout << "Enter a single character:\n";
  char ch{};
  std::cin >> ch;
  int chASCII{ch};

  std::cout << "You entered '" << ch << "' which has ASCII code: " << chASCII
            << '\n';

  return 0;
}
