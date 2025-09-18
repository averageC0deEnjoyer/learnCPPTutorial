#include <cassert>
#include <cstdint>
#include <iostream>

constexpr std::int64_t powint(std::int64_t base, int exp)
{
  assert(exp >= 0 && "powint: exp parameter has a negative value");

  if (base == 0)
    return (exp == 0) ? 1 : 0;

  std::int64_t result{1};
  // binary exponentiation algorithm
  while (exp > 0)
  {
    if (exp & 1)
    {
      result *= base;
    }
    exp /= 2;
    base *= base;
  }

  return result;
}

int main()
{
  std::cout << powint(2, 7) << '\n';
  return 0;
}
