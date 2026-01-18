#include <iostream>
#include <string>
using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  cout << "$ ";
  std::string input;
  std::getline(std::cin, input);
  std::cout << input << ": command not found" << std::endl;

  return 0;
}
