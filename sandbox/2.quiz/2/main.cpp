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
