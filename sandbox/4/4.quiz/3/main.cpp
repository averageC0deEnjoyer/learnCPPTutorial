#include <iostream>

void heightFormula(int sec, double towerHeight)
{
  double result{towerHeight - 9.8 * sec * sec / 2};
  if (result > 0)
    std::cout << "At " << sec << " seconds, the ball is at height: " << result
              << '\n';
  else
    std::cout << "At " << sec << " seconds, ball is already on the ground"
              << '\n';
}

int main()
{
  // ask tower height
  std::cout << "Enter tower height: ";
  double towerHeight{};
  std::cin >> towerHeight;
  heightFormula(0, towerHeight);
  heightFormula(1, towerHeight);
  heightFormula(2, towerHeight);
  heightFormula(3, towerHeight);
  heightFormula(4, towerHeight);
  heightFormula(5, towerHeight);

  return 0;
}
