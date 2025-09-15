#include <iostream>

// before looking solution
//  void heightFormula(int sec, double towerHeight)
//  {
//    // avoid magic number, extract 9.8 and put to gravity
//    double gravity{9.8};
//    double result{towerHeight - gravity * sec * sec / 2};
//    // this can be extract to another function like print result , apply
//    Single
//    // Responsibility
//    if (result > 0)
//      std::cout << "At " << sec << " seconds, the ball is at height: " <<
//      result
//                << '\n';
//    else
//      std::cout << "At " << sec << " seconds, ball is already on the ground"
//                << '\n';
//  }
//
//  int main()
//  {
//    // ask tower height
//    std::cout << "Enter tower height: ";
//    double towerHeight{};
//    std::cin >> towerHeight;
//    heightFormula(0, towerHeight);
//    heightFormula(1, towerHeight);
//    heightFormula(2, towerHeight);
//    heightFormula(3, towerHeight);
//    heightFormula(4, towerHeight);
//    heightFormula(5, towerHeight);
//
//    return 0;
//  }
//

//--------------------------------REFACTOR--------------------------------------------

double calculateBallHeight(int sec, double towerHeight)
{
  // avoid magic number, extract 9.8 and put to gravity
  double gravity{9.8};
  // maybe from gravity ... can be extracted to own formula
  double ballHeight{towerHeight - gravity * sec * sec / 2};
  if (ballHeight < 0)
    return 0.0;
  return ballHeight;
}

void printBallHeight(int sec, double ballHeight)
{
  if (ballHeight > 0)
    std::cout << "At " << sec
              << " seconds, the ball is at height: " << ballHeight << '\n';
  else
    std::cout << "At " << sec << " seconds, ball is already on the ground"
              << '\n';
}

// the only one that will be called in main
void calculateAndPrintBallHeight(int sec, double towerHeight)
{
  // ball height changing according to the second
  double ballHeight{calculateBallHeight(sec, towerHeight)};
  printBallHeight(sec, ballHeight);
}

int main()
{
  // ask tower height
  std::cout << "Enter tower height: ";
  double towerHeight{};
  std::cin >> towerHeight;

  calculateAndPrintBallHeight(0, towerHeight);
  calculateAndPrintBallHeight(1, towerHeight);
  calculateAndPrintBallHeight(2, towerHeight);
  calculateAndPrintBallHeight(3, towerHeight);
  calculateAndPrintBallHeight(4, towerHeight);
  calculateAndPrintBallHeight(5, towerHeight);

  return 0;
}
