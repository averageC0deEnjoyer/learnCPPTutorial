// Q 1
//
//
// #include <iostream>
//
// double getTowerHeight()
// {
//   std::cout << "Enter the tower height in meter: ";
//   double towerHeight{};
//   std::cin >> towerHeight;
//   return towerHeight;
// }
//
// double calculateBallHeight(double towerHeight, int seconds)
// {
//   const double gravity{9.8};
//
//   const double fallDistance{gravity * (seconds * seconds) / 2.0};
//   const double ballHeight{towerHeight - fallDistance};
//
//   if (ballHeight < 0.0)
//     return 0.0;
//
//   return ballHeight;
// }
//
// void printBallHeight(double ballHeight, int seconds)
// {
//   if (ballHeight > 0.0)
//   {
//     std::cout << "At " << seconds << " seconds"
//               << " the ball height is: " << ballHeight << '\n';
//   }
//   else
//   {
//     std::cout << "At " << seconds << " the ball is at the ground" << '\n';
//   }
// }
//
// double calculateAndPrintBallHeight(double towerHeight, int seconds)
// {
//   const double ballHeight{calculateBallHeight(towerHeight, seconds)};
//   printBallHeight(ballHeight, seconds);
//
//   return ballHeight;
// }
//
// int main()
// {
//   const double towerHeight{getTowerHeight()};
//   int seconds{};
//   while (calculateAndPrintBallHeight(towerHeight, seconds) > 0.0)
//   {
//     ++seconds;
//   }
//   return 0;
// }
//

// Q2
#include <cassert>
#include <iostream>

bool isPrime(int x)
{
  // need to handle 0,1 . for case x = 2, dont need to check since
  // wont get into the for loop
  //  if (x == 0 || x == 1)
  //    return false;
  if (x <= 1)
    return false;

  // if (x == 2)
  //   return true;

  for (int i{2}; i < x; ++i)
  {
    if (i % 2 == 0 && i > 2)
      continue;
    // this is from the fact that non prime number will have factor
    // that is smaller than the sqrt of that number.
    if (!(i * i <= x))
      return true;
    if (x % i == 0)
      return false;
  }
  return true;
}

int main()
{
  assert(!isPrime(0)); // terminate program if isPrime(0) is true
  assert(!isPrime(1));
  assert(isPrime(2)); // terminate program if isPrime(2) is false
  assert(isPrime(3));
  assert(!isPrime(4));
  assert(isPrime(5));
  assert(isPrime(7));
  assert(!isPrime(9));
  assert(isPrime(11));
  assert(isPrime(13));
  assert(!isPrime(15));
  assert(!isPrime(16));
  assert(isPrime(17));
  assert(isPrime(19));
  assert(isPrime(97));
  assert(!isPrime(99));
  assert(isPrime(13417));

  std::cout << "Success!\n";

  return 0;
}
