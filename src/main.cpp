#include <iostream>
#include <string>
using namespace std;

int main() {
  // Flush after every std::cout / std:cerr
  cout << unitbuf;
  cerr << unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  cout << "$ ";
  string userCommand;

  cin >> userCommand;

  cout << userCommand << ": " << "command not found" << endl;

}
