#include <iostream>

// int main()
// {
//   int x{10};
//   switch (2)
//   {
//     int a;
//   case 1:
//     std::cout << "in 1";
//     break;
//   case 2:
//     std::cout << "in 2";
//     a = 10;
//     [[fallthrough]];
//   case 3:
//     std::cout << "in 3";
//     break;
//   default:
//     std::cout << "default!";
//     break;
//   }
//   return 0;
// }
//
// int main()
// {
//   switch (2)
//   {
//   case 1:
//     int y;
//     break;
//   case 2:
//     y = 5;
//     std::cout << y;
//     break;
// j }
//   return 0;
// }
//
// int main()
// {
//
//   switch (2)
//   {
//   case 1:
//   {           // note addition of explicit block here
//     int x{4}; // okay, variables can be initialized inside a block inside a
//     case std::cout << x; break;
//   }
//   case 2:
//     std::cout << "in 2";
//     break;
//
//   default:
//     std::cout << "default case\n";
//     break;
//   }
// }
//
// QUIZ
//
int calculate(int x, int y, char op)
{
  switch (op)
  {
  case '+':
    return x + y;
  case '-':
    return x - y;
  case '*':
    return x * y;
  case '/':
    return x / y;
  }
}

int main()
{
  std::cout << calculate(5, 10, '+') << '\n';
  std::cout << calculate(5, 10, '-') << '\n';
  std::cout << calculate(5, 10, '*') << '\n';
  std::cout << calculate(5, 10, '/') << '\n';

  return 0;
}
