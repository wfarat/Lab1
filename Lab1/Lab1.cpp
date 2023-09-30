// Czyta trzy d³ugoœci boków i pisze czy tworz¹ trójk¹t
//

#include <iostream>
using namespace std;
int main()
{
  int n;
  int odp = 1;
  cout << "Wpisz liczbe:";
  cin >> n;
  while (n > 1) {
    n = n / 2;
    odp++;
  }
  cout << odp;
}
