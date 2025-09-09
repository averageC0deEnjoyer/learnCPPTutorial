
#include <iostream>

int add(int x,int y)
{
  int z {x+y};

  return z;
}

int main()
{
  std::cout << add(3,4) << '\n';
  return 0;
}
