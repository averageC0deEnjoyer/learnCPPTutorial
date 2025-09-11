#include <iostream>

int readNumber();

void writeAnswer(int x);

int main()
{
  int firstValue{readNumber()};
  int secondValue{readNumber()};
  int sum{firstValue + secondValue};
  writeAnswer(sum);
  return 0;
}

int readNumber()
{
  std::cout << "Enter a number:\n";
  int x{};
  std::cin >> x;
  return x;
}

void writeAnswer(int x) { std::cout << x << "\n"; }
