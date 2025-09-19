#include <bitset>
#include <iostream>

int main()
{
  std::bitset<8> bits{0b0000'0101};
  // bits.set(3);
  // bits.flip(4);
  // bits.reset(4);
  //
  // std::cout << "All the bits " << bits << '\n';
  // std::cout << "Bits at pos 3 " << bits.test(3) << '\n';
  // std::cout << "Bits at pos 4 " << bits.test(4) << '\n';
  std::cout << bits.size() << " bits are in the bitset\n";
  std::cout << bits.count() << " bits are set to true\n";

  std::cout << std::boolalpha;
  std::cout << "All bits are true: " << bits.all() << '\n';

  std::cout << "Some bits are true: " << bits.any() << '\n';

  std::cout << "No bits are true: " << bits.none() << '\n';

  return 0;
}
