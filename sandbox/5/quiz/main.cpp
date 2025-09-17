#include <cstdint> // for std::uint8_t
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  std::uint8_t age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: " << '\n';

  bool test{(static_cast<int>(age) >= 16)};

  std::cout << age << '\n';
  std::cout << static_cast<int>(age) << '\n';

  if (static_cast<int>(age) >= 16)
    std::cout << "Yes";
  else
    std::cout << "No";

  std::cout << '\n';

  return 0;
}
