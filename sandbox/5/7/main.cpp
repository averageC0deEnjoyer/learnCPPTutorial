// #include <iostream>
// #include <string>
//
// int main()
// {
//   constexpr std::string testString{"hello bois"};
//   return 0;
// }
//
//
//
//
#include <iostream>
#include <string>

int main()
{

  std::cout << "Enter your full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  std::cout << "Enter your age: ";
  int age{};
  std::cin >> age;

  int total{age + static_cast<int>(name.length())};
  std::cout << "Your age + length of name is: " << total;
  return 0;
}
