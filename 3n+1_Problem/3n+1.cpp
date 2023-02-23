#include <iostream>
using namespace std;
int main() 

{
  cout << "3n + 1 Program -- rrnetawat" << endl;
  int n;
  while(true)
  {
    cout << "Enter an integer starting value: ";
    cin >> n;
    if(n == 0) break;
    while(true)
    {
      cout << n << "  ";
      if(n ==1) break;
      if(n%2 == 0)
      {
        n = n/2;
      }
      else
      {
        n = 3*n + 1;
      }
    }
  }
  return 0;
}
