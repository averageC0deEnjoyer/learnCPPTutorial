#include <iostream>

// int main()
// {
//   int count{};
//   bool keepLooping{true};
//
//   while (keepLooping)
//   {
//     std::cout << "pick a char" << '\n';
//     char input{};
//     std::cin >> input;
//     if (input == 'e')
//     {
//       keepLooping = false;
//     } else {
//     DONT FORGET ELSE
//     ++count;
//     std::cout << "we have loop " << count << " times\n";
//
//     }
//   }
//
//   return 0;
// }
//

int main()
{
  int count{};

  while (true)
  {
    std::cout << "pick a char" << '\n';
    char input{};
    std::cin >> input;

    if (input == 'e')
      break;

    ++count;
    std::cout << "we have loop " << count << " times\n";
  }

  return 0;
}
