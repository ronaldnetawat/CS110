#include <iostream>
using namespace std;
int main() 

{
  cout << "Name Length chacking program -- rrnetawat" << endl;
  string st;
  while(true)
  {
      cout << "Enter a name of the form Doe, John: ";
      getline(cin,st);
      if(st == "") break;
      int c = st.find(",", 0);
      int l = st.length();
      cout << "The first name is " << l - c - 2 << " characters long. " << endl;
      cout << "The last name is " << c <<  " characters long" << endl << endl;
  }
  return 0;
}

