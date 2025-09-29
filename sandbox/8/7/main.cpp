#include <iostream>

// int main()
// {
//   double x{};
//
// tryAgain:
//   std::cout << "Enter a non negative number: " << '\n';
//   std::cin >> x;
//   if (x < 0.0)
//   {
//     goto tryAgain;
//   }
//   std::cout << "You chose: " << x;
//
//   return 0;
// }
//

// void printCats(bool skip)
// {
//   if (skip)
//   {
//     goto end;
//   }
//   std::cout << "Im a cattos!\n";
//
// end:;
// }
//
// int main()
// {
//   printCats(true);
//   return 0;
// }

// int main()
// {
//   goto skip;
//   int x{5};
// skip:
//   x += 3;
// }

#include <iostream>

int main()
{
  for (int i{1}; i <= 5; i++)
  {
    for (int j{1}; j <= 5; j++)
    {
      std::cout << i << '*' << j << " is " << i * j << '\n';
      if (i * j % 9 == 0)
        goto end;
    }
  }
end:
  std::cout << "we are at end finally";
  return 0;
}
