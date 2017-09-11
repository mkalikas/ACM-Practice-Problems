#include <iostream>
#include <cmath> // needed for ceil
#include <cassert>

int subtract_and_divide(unsigned long long a, unsigned long long b) {
  if((a - b) < 0)
    return 1;
  else if(a % b == 0)
    return a / b;
  else
    return ceil(a / b) + 1;
}


int main() {
  unsigned long long n; // length in meters
  unsigned long long m; // width in meters
  unsigned long long a; // flagstone side in meters
  unsigned long long accross; // (n-a)/a
  unsigned long long down; // (m-a)/a

  std::cin >> n >> m >> a; // standard input

  assert(a <= 1000000000);
  assert(1 <= n);

  accross = subtract_and_divide(n, a);
  down = subtract_and_divide(m, a);

  assert((accross && down) > 0);
  assert(((accross * a) * (down * a)) >= (n * m));



  std::cout << accross * down << "\n";

}
