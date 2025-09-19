#include "io.h"
#include <iostream>

int main()
{
  int firstValue{readNumber()};
  int secondValue{readNumber()};
  int sum{firstValue + secondValue};
  writeAnswer(sum);
  return 0;
}
