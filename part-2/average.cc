// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (static_cast<int>(arguments.size())< 2) {
  std::cout << " error: you must supply at least one number \n";
  return 1;
  }
  double total{0.0};
  bool first{true};
  for(std::string argument : arguments) {
   float numbers = std::stod(argument,nullptr);
   if(first == true) {
  first = false;
   } else {
   total += numbers;
   }
   
  }
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  
  double average{0.0};

  average = total / (arguments.size() - 1);
  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average;

  return 0;
}
