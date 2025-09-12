#include <iostream>

int readNumber()
{
  int xInside{};
  std::cout << "enter a number\n";
  std::cin >> xInside;
  return xInside;
}

void writeAnswer(int x)
{
  std::cout << "the answer is " << x << '\n';
}

int main()
{
  int x{};
  x = readNumber();
  x = x + readNumber();
  writeAnswer(x);

  return 0;
}
