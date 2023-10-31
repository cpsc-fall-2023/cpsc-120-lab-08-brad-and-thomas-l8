// Thomas Chen
// chenthomas64@csu.fullerton.edu
// @ThomasChen16
// Partners: @BradleyB30, @subasx

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (static_cast<int>(arguments.size()) < 2) {
    std::cout << " error: you must supply at least one number \n";
    return 1;
  }
  double total{0.0};
  bool first{true};
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      double numbers = std::stod(argument);
      total += numbers;
    }
  }
  double average{0.0};

  average = total / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average << "\n";

  return 0;
}
