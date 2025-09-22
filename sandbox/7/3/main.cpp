#include <iostream>

// QUESTION 1

int main()
{
  std::cout << "Enter an integer: " << '\n';
  int x{};
  std::cin >> x;

  std::cout << "Enter a larger integer: " << '\n';
  int y{};
  std::cin >> y;

  if (x > y)
  {
    int temp{x};
    x = y;
    y = temp;
  } // temp dies here

  std::cout << "The smaller value is: " << x << '\n';
  std::cout << "The bigger value is: " << y << '\n';
  return 0;
} // y, x dies here
