#include <iostream>

static int accumulate(int x)
{
  static int y{0};
  y += x;
  return y;
}

int main(int argc, char *argv[])
{

  std::cout << accumulate(4) << '\n';
  std::cout << accumulate(3) << '\n';
  std::cout << accumulate(2) << '\n';
  std::cout << accumulate(1) << '\n';

  return 0;
}
