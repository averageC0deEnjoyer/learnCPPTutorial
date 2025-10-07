// #include <iostream>

// template <typename T, typename U> auto max(T x, U y)
// {
//   return (x < y) ? y : x;
// }
//
// int main()
// {
//   std::cout << max(2, 3.5) << '\n';
//   return 0;
// }
//

#include <iostream>
#include <type_traits>

template <typename T, typename U>
auto max(T x, U y) -> std::common_type_t<T, U>;

int main()
{
  std::cout << max(2, 3.5);
  return 0;
}

template <typename T, typename U> auto max(T x, U y) -> std::common_type_t<T, U>
{
  return (x < y) ? y : x;
}
