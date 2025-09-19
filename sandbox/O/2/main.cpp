// #include <bitset>
// #include <cstdint>
// #include <iostream>
// #include <typeinfo>

// int main()
// {
//   std::bitset<4> x{0b1100};
//
//   x <<= 1;
//
//   std::cout << x << '\n';
//
//   return 0;
// }
// int main()
// {
//   std::uint8_t c{0b00001111};
//   std::cout << typeid(c).name() << std::endl;
//
//   // std::uint8_t cneg{~c};
//   return 0;
// }

// in my own words, first shift 6, type become int, then we cut by static_cast,
// then we romote again to bitset 32
//  int main()
//  {
//    std::uint8_t c{0b00001111};
//    std::cout << std::bitset<32>(static_cast<std::uint8_t>(c << 6)) << '\n';
//    return 0;
//  }
//
// QUESTION 2
#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
  // Your code here
  bool isLeftMost{false};
  // check the left most bit
  if (bits.test(3))
    isLeftMost = true;
  // shift left
  bits <<= 1;
  // set the most right bit to 1 if condition
  if (isLeftMost)
    bits.set(0);
  return bits;
}

// QUESTION 3
std::bitset<4> rotl2(std::bitset<4> bits)
{
  // check the leftmost bit
  bool isLeftMost{bits & 0b1000};
  // shift left
  bits <<= 1;

  if (isLeftMost)
    bits |= 0b0001;

  return bits
}

int main()
{
  std::bitset<4> bits1{0b0001};
  std::cout << rotl(bits1) << '\n';
  std::cout << rotl2(bits1) << '\n';

  std::bitset<4> bits2{0b1001};
  std::cout << rotl(bits2) << '\n';
  std::cout << rotl2(bits2) << '\n';

  return 0;
}
