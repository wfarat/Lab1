// Czyta trzy d�ugo�ci bok�w i pisze czy tworz� tr�jk�t
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
