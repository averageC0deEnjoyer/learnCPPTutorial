#include <iostream>

double userInputValue();
char userInputOperator();
void printValue(double x, double y, char op);

int main()
{
  double x{userInputValue()};
  double y{userInputValue()};
  char op{userInputOperator()};
  printValue(x, y, op);

  return 0;
}

double userInputValue()
{
  std::cout << "Enter a double value:";
  double x{};
  std::cin >> x;
  return x;
}

char userInputOperator()
{
  std::cout << "Enter + - * / ";
  char op{};
  std::cin >> op;
  return op;
}

// better to separate calculate value(logic) and printing value
void printValue(double x, double y, char op)
{
  double result{};

  if (op == '+')
    result = x + y;
  else if (op == '-')
  {
    result = x - y;
  }
  else if (op == '*')
  {
    result = x * y;
  }
  else if (op == '/')
  {
    result = x / y;
  }

  std::cout << x << op << y << " is " << result << '\n';
}
