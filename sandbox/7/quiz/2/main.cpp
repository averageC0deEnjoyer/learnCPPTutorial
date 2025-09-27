#include "constants.h"
#include <iostream>

int main(int argc, char *argv[])
{
  std::cout << "How many students are in your class?\n";
  int students{};
  std::cin >> students;

  if (students > Constans::maxClassSize)
  {
    std::cout << "There are too many students in this class\n";
  }
  else
  {
    std::cout << "This class isn't too large\n";
  }

  return 0;
}
