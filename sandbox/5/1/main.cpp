#include <iostream>

void someFnc(){
#define gravity 9.8
}

void printGravity(double gravity)
{
  std::cout << "gravity is: " << gravity << '\n';
}

int main()
{
  printGravity(3.71);

  return 0;
}
