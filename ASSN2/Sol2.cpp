#include <iostream>
using namespace std;
 
int main()
{
  cout << "CS110 Assignment 02 - Word count program -- rrnetawat" << endl;
  
  
  string str;
  while(true)
  {
      cout << "Enter line to be processed (empty line to exit): " << endl;
    getline(cin,str);
    if(str == " ") break;

    int k = str.find("  ", 0);
    if(k == string::npos) break;
      str.replace(k,2," ");
    if(str.substr(0,1) == " ")
      str = str.substr(1);
    if(str.length() > 0 && str.substr(str.length()-1,1) == " ")
      str = str.substr(0, str.length()-1);

    int count = 0;
    int i = 0;
    int j = 0;

    for (int i = 0; i< str.length(); i++) 
    {
      if(str[i]==' ')
      count++;
      if(str[i] != ' ')
      j++;
    }

    cout << count+1 << " words - " << j << " non-space characters." << endl;
  }
  return 0;

}
