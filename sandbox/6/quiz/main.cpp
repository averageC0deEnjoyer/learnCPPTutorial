#include <iostream>
#include <string>

// Write the function getQuantityPhrase() here
std::string_view getQuantityPhrase(int appleQty)
{
  if (appleQty < 0)
  {
    return "negative";
  }
  else if (appleQty == 0)
  {
    return "no";
  }
  else if (appleQty == 1)
  {
    return "a single";
  }
  else if (appleQty == 2)
  {
    return "a couple of";
  }
  else if (appleQty == 3)
  {
    return "a few";
  }
  else if (appleQty > 3)
  {
    return "many";
  }
}

// Write the function getApplesPluralized() here
std::string_view getApplesPluralized(int appleQty)
{
  return appleQty == 1 ? "apple" : "apples";
}

int main()
{
  constexpr int maryApples{3};
  std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
            << getApplesPluralized(maryApples) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;

  std::cout << "You have " << getQuantityPhrase(numApples) << ' '
            << getApplesPluralized(numApples) << ".\n";

  return 0;
}
