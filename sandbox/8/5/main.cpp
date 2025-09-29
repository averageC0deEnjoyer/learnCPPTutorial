#include <iostream>

void printDigitName(int x)
{
  switch (x)
  {
  case 1:
    std::cout << "1\n";
    return;
  case 2:
    std::cout << "2\n";
    return;
  case 3:
    std::cout << "3\n";
    return;
  default:
    std::cout << "unknown\n";
    return;
  }
}

int main(int argc, char *argv[])
{
  printDigitName(2);

  return 0;
}

void printDigit(int x)
{
  switch (x)
  {
  case 1:
    std::cout << "helo bos";
    return;
  case 2:
    std::cout << "whats up boss";
    return;
  case 3:
    std::cout << "eat boss";
    return;
  default:
    std::cout << "unknown boss";
    return;
  }
}
