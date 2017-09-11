#include <iostream>
#include <string>

void output(std::string s) {
  if(s.length() <= 10)
    std::cout << s;
  else {
    std::cout << s[0] << (s.length() - 2) << s[s.length() - 1];
  }
}
int main() {
  int n; // 1 <= n <= 100
  std::string s;


  std::cin >> n;

  for(int i = 0; i < n; ++i) {
    std::cin >> s;

    output(s);
    std::cout << "\n";

  }
}
