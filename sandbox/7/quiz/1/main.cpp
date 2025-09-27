#include <iostream>

int main(int argc, char *argv[])
{
  std::cout << "Enter a positive number: ";
  int num{};
  std::cin >> num;

  if (num < 0)
  {
    std::cout << "Negative number detected. Changing to positive\n";
    num = -num;
  }

  std::cout << "you entered" << num << '\n';

  return 0;
}
