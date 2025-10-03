#include <ios>
#include <iostream>
#include <limits>

void ignoreLine()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble()
{
  while (true)
  {
    std::cout << "enter a number: ";
    double number{};
    std::cin >> number;

    std::cin.clear();
    ignoreLine();

    if (std::cin)
    {
      return true;
    }
  }
}

int main()
{
  double x{};
  char c1{};
  double y{};
  char c2{};

  std::cin >> x >> c1 >> y >> c2;

  std::cout << x << c1 << y << c2;
  return 0;
}
