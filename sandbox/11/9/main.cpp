template <int D> constexpr int factorial()
{
  static_assert(D >= 0, "factorial must be non negative");

  int total{1};
  for (int i{1}; i <= D; ++i)
  {
    total *= i;
  }
  return total;
}

int main()
{
  static_assert(factorial<0>() == 1);
  static_assert(factorial<3>() == 6);
  static_assert(factorial<5>() == 120);

  factorial<-3>();

  return 0;
}
