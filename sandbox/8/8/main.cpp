#include <iostream>

// int main()
// {
//   int count{};
//   while (count <= 10)
//   {
//     std::cout << count << '\n';
//     ++count;
//   }
//   return 0;
// }

// int main()
// {
//   char c{};
//   while (true)
//   {
//     std::cout << "login again (y/n)\n";
//     std::cin >> c;
//     if (c == 'n')
//       return 0;
//   }
//   return 0;
// }

// int main()
// {
//   char c{'a'};
//   while (c <= 'z')
//   {
//     std::cout << c << ' ' << static_cast<int>(c) << '\n';
//     ++c;
//   }
//
//   return 0;
// }

// Q 3
//  int main()
//  {
//    for (int i{5}; i > 0; i--)
//    {
//      for (int j{i}; j > 0; j--)
//      {
//        std::cout << j << " ";
//      }
//      std::cout << '\n';
//    }
//  }

// int main()
// {
//   int i{5};
//   while (i > 0)
//   // i is 5, 4, 3, ...
//   {
//     int j{i};
//     while (j > 0)
//     {
//       std::cout << j << ' ';
//       --j;
//     }
//     std::cout << '\n';
//     --i;
//   }
// }

// Q4

int main()
{
  int i{1};
  int size{5};
  while (i <= size)
  {
    // i is 1,2,3,...
    int j{size};
    while (j >= 1)
    {
      if (j <= i)
      {
        std::cout << j << " ";
      }
      else
      {
        std::cout << "  ";
      }
      --j;
    }
    std::cout << '\n';
    ++i;
  }
}
