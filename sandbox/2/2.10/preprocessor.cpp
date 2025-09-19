// #include <iostream>
//
// #define MY_NAME "foo"
//
// int main()
// {
//   std::cout << "Hello world\n" << "my name is " << MY_NAME << '\n';
//   return 0;
// }

#include <iostream>

#define MY_BAR

int main()
{
  // #ifdef MY_JOE
  //   std::cout << "im a joe!" << '\n';
  // #endif //

#ifndef MY_JOE
  std::cout << "Im in not defined" << '\n';
#endif // !

#ifdef MY_BAR
  std::cout << "im a bar" << '\n';
#endif

  return 0;
}
