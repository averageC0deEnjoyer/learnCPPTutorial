#include <cstdint>
#include <iostream>

// std::int64_t pow(int base, int exponent)
// {
//   std::int64_t total{1};
//   for (int i{1}; i <= exponent; ++i)
//   {
//     total *= base;
//   }
//   return total;
// }
//
// int main()
// {
//   std::cout << pow(2, 3);
//   return 0;
// }

// int main()
// {
//   for (int i{9}, j{0}; i >= 0; --i, ++j)
//   {
//     std::cout << i << " " << j << '\n';
//   }
//   return 0;
// }

// QUIZ
// QUIZ 1

// int main()
// {
//   for (int i{0}; i <= 20; i += 2)
//   {
//     std::cout << i << '\n';
//   }
//   return 0;
// }

// QUIZ 2
// int sumTo(int value)
// {
//   int total{0};
//   for (int i{1}; i <= value; ++i)
//   {
//     total += i;
//   }
//   return total;
// }
//
// int main()
// {
//   std::cout << sumTo(5) << '\n';
//
//   return 0;
// }

// QUIZ 4
// void fizzbuzz(int value)
// {
//   for (int i{1}; i <= value; ++i)
//   {
//     if (i % 3 == 0 && i % 5 == 0)
//       std::cout << "fizzbuzz\n";
//     else if (i % 3 == 0)
//       std::cout << "fizz\n";
//     else if (i % 5 == 0)
//       std::cout << "buzz\n";
//     else
//       std::cout << i << '\n';
//   }
// }
//
// int main()
// {
//   fizzbuzz(15);
//   return 0;
// }

// QUIZ 5
void fizzbuzzmodified(int value)
{
  for (int i{1}; i <= value; ++i)
  {
    if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
      std::cout << "fizzbuzzpop\n";
    else if (i % 3 == 0 && i % 5 == 0)
      std::cout << "fizzbuzz\n";
    else if (i % 3 == 0 && i % 7 == 0)
      std::cout << "fizzpop\n";
    else if (i % 5 == 0 && i % 7 == 0)
      std::cout << "buzzpop\n";
    else if (i % 3 == 0)
      std::cout << "fizz\n";
    else if (i % 5 == 0)
      std::cout << "buzz\n";
    else if (i % 7 == 0)
      std::cout << "pop\n";
    else
      std::cout << i << '\n';
  }
}

int main()
{
  fizzbuzzmodified(150);
  return 0;
}
