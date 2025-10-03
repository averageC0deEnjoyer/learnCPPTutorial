#include <iostream>

void testFunction(int a, int b)
{
  ++a;
  int c{30};
  --b;
  std::cout << a << " " << b << " " << c;
}

int main()
{
  testFunction(10, 20);
  return 0;
}
