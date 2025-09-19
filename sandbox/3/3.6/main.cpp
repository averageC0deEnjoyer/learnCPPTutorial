#include <iostream>

// TEST BASIC DEBUGGER FUNCTIONALITY
// void printValue(int value) { std::cout << value << '\n'; }
//
// int main()
// {
//   int x{10};
//   printValue(5);
//   x = x + 10;
//   return 0
// }

// TO TEST WATCH EXPRESSION/VARIABLE
// int main()
// {
//   int x{1};
//   std::cout << x << " ";
//
//   x = x + 2;
//   std::cout << x << " ";
//
//   x = x + 3;
//   std::cout << x << " ";
//
//   return 0;
// }

void a() { std::cout << "a called\n"; }
void b() { std::cout << "b called\n"; }
int main()
{
  a();
  b();
  return 0;
}
