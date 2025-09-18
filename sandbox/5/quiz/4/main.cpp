#include <iostream>
#include <string>

// BEFORE LOOKING SOLUTION
//  std::string getName(int number)
//  {
//    std::cout << "Enter the name of person #" << number << ": ";
//    std::string name{};
//    std::getline(std::cin >> std::ws, name);
//    return name;
//  }
//
//  int getAge(std::string name)
//  {
//    std::cout << "Enter the age of " << name << ": ";
//    int age{};
//    std::cin >> age;
//    return age;
//  }
//
//  int main()
//  {
//    std::string firstPersonName{getName(1)};
//    int firstPersonAge{getAge(firstPersonName)};
//
//    std::string secondPersonName{getName(2)};
//    int secondPersonAge{getAge(secondPersonName)};
//
//    return 0;
//  }

// AFTER LOOKING SOLUTION
std::string getName(int number)
{
  std::cout << "Enter the name of person #" << number << ": ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  return name;
}

// dont copy string, expensive
int getAge(std::string_view name)
{
  std::cout << "Enter the age of " << name << ": ";
  int age{};
  std::cin >> age;
  return age;
}

void printOlderPerson(std::string_view name1, int age1, std::string_view name2,
                      int age2)
{
  if (age1 > age2)
    std::cout << name1 << " " << "(age " << age1 << ")" << " is older than "
              << name2 << " " << "(age " << age2 << ")" << '\n';
  else if (age2 > age1)
    std::cout << name2 << " " << "(age " << age2 << ")" << " is older than "
              << name1 << " " << "(age " << age1 << ")" << '\n';
}

int main()
{
  const std::string firstPersonName{getName(1)};
  const int firstPersonAge{getAge(firstPersonName)};

  const std::string secondPersonName{getName(2)};
  const int secondPersonAge{getAge(secondPersonName)};

  printOlderPerson(firstPersonName, firstPersonAge, secondPersonName,
                   secondPersonAge);

  return 0;
}
