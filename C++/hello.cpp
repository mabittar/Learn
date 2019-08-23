#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "Qual o seu nome? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
}
