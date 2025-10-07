#include <iostream>

constexpr int foo(int);

constexpr int goo(int c)
{
  return foo(c); // note that foo is not defined yet
}

constexpr int
foo(int b) // okay because foo is still defined before any calls to goo
{
  return goo(b);
}

int main()
{
  constexpr int a{goo(5)}; // this is the outermost invocation

  std::cout << a;

  return 0;
}
