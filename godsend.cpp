#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <numeric>


std::stack<int> convert(std::string &str, int position) {
  std::stack<int> s;

  if(isspace(str[position]))
    ++position;
  else {
      while(position != str.length()) {
        s.push(str[position]);
        ++position;
      }
  }

  return s;
}

int main() {
  int n; // length of array
  std::stack<int> elements; // array of elements
  std::string str;
  int sum_stack;

  std::cin >> n;
  std::getline(std::cin, str);

  elements = convert(str, 0);

  std::partial_sum(elements.begin(), elements.end(), elements.begin());






}
