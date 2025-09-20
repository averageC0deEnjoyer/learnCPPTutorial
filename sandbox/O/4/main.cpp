#include <cstdint>
#include <iostream>

void printBit(int userInput, int divisor)
{
  std::cout << ((userInput / divisor) % 2);
}

void print8BitBinary(int x)
{
  printBit(x, 128);
  printBit(x, 64);
  printBit(x, 32);
  printBit(x, 16);
  std::cout << ' ';
  printBit(x, 8);
  printBit(x, 4);
  printBit(x, 2);
  printBit(x, 1);
}

int main()
{
  std::cout << "Input number between 0-255: ";
  int userInput{};
  std::cin >> userInput;

  print8BitBinary(userInput);

  std::cout << '\n';

  return 0;
}
