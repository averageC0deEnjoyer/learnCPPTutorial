#include "Random.h"
#include <iostream>

bool playHiLo()
{

  const int randomNumber{Random::get(1, 100)};

  std::cout << "Lets play a game. Choose number between 1 till 100.\n";

  for (int count{1}; count <= 7; ++count)
  {
    std::cout << "Guess #" << count << ": ";
    int guess{};
    std::cin >> guess;

    if (guess > randomNumber)
    {
      std::cout << "Guess is too high\n";
    }
    else if (guess < randomNumber)
    {
      std::cout << "Guess is too low\n";
    }
    else
    {
      std::cout << "You are correct!\n";
      return true;
    }
  }

  std::cout << "You lose\n";
  return false;
}

bool playAgain()
{
  while (true)
  {
    std::cout << "Do you want to play again?(y/n)";
    char c{};
    std::cin >> c;

    switch (c)
    {
    case 'y':
      return true;
    case 'n':
      return false;
    }
  }
}

int main()
{
  do
  {
    playHiLo();
  } while (playAgain());

  return 0;
}
