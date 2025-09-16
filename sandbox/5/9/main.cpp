#include <iostream>
#include <string>
#include <string_view>

// undefined behavior example 1
// but if i run this in my mac, it still works correctly
// int main()
// {
//   std::string_view sv{};
//   {
//     std::string s{"testString"};
//     sv = s;
//   }
//   std::cout << sv;
//   return 0;
// }
//

// undefined behavior example 2
//
std::string getName()
{
  std::string name{"foo"};
  return name;
}

int main()
{
  std::string_view sv{getName()};
  std::cout << "test" << sv;
  return 0;
}
