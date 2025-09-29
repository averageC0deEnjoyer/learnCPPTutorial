// #include <iostream>
// #include <random>
//
// int main()
// {
//   std::mt19937 mt{};
//   std::uniform_int_distribution die6{1, 6};
//   for (int i{1}; i <= 40; ++i)
//   {
//     std::cout << die6(mt) << " ";
//
//     if (i % 10 == 0)
//       std::cout << '\n';
//   }
//   return 0;
// }

// #include <chrono>
// #include <iostream>
// #include <random>
//
// int main()
// {
//   std::mt19937 mt{static_cast<std::mt19937::result_type>(
//       std::chrono::steady_clock::now().time_since_epoch().count())};
//   std::uniform_int_distribution die6{1, 6};
//   for (int i{1}; i <= 40; ++i)
//   {
//     std::cout << die6(mt) << " ";
//
//     if (i % 10 == 0)
//       std::cout << '\n';
//   }
//   return 0;
// }

#include <iostream>
#include <random>

int main()
{
  std::mt19937 mt{std::random_device{}()};
  std::uniform_int_distribution die6{1, 6};

  for (int i{1}; i <= 40; ++i)
  {
    std::cout << die6(mt) << " ";

    if (i % 10 == 0)
      std::cout << '\n';
  }
  return 0;
}
