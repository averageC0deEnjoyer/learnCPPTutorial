#include <iostream>

void incrementAndPrint()
{
  static int s_value{0};
  ++value;
  std::cout << value << '\n';
}

int main(int argc, char *argv[])
{

  incrementAndPrint();
  incrementAndPrint();
  incrementAndPrint();

  return 0;
}
