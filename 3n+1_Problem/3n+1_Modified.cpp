#include <iostream>
using namespace std;
int main() 

{
  cout << "3n + 1 Program -- rrnetawat" << endl;
  long long int n;
  while(true)
  {
    cout << "Enter an integer starting value: ";
    cin >> n;
    if(n == 0) break;
    long long int largest = 0;
    while(true)
    {
      cout << n << "  ";
      if(n > largest)
      {
        largest = n;
      }
      if(n <=1) break;
      if(n%2 == 0)
      {
        n = n/2;
      }
      else
      {
        n = 3*n + 1;
      }
    }
    cout << endl << endl;
    cout << "The largest number encountered is: " << largest << endl << endl;
  }
  return 0;
}
