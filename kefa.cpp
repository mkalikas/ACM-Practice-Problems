#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


// function that returns true if an element in counts is greater than k
// if this returns true, then the output in main is no
bool terminating(int t, int k) {
  return t > k;
}

int main() {
  int n; // n = number of baloons, n >= 1
  int k; // k = number of friends, k <= 100
  std::string s; // colors of baloons

  std::cin >> n >> k;
  std::cin >> s;

  std::vector<int> counts (300, 0);

  for(int i = 0; i < s.size(); ++i) { // count for each color in input string
    counts[s[i] - 'a'] += 1;
  }

  auto x = std::find_if(counts.begin(), counts.end(), [&] (int t) { return terminating(t, k); });

  if(x == counts.end())
    std::cout << "YES\n";
  else
    std::cout << "NO\n";


}
