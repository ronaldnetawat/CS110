// MY SOLUTION:

#include <iostream>
#include <iomanip>
using namespace std;
double vcount(string instring, char b)
{
  int c = 0;
  for (int i = 0; i < instring.length(); i++){
    if (instring[i]==b)
    {
      c++;
    }
  }
  return c;
}
void convert (string& s) {
  for (int j = 0; j < s.length(); j++) {
    s[j] = tolower(s[j]);
  }
}



int main()
{
  cout << "CS110 Assignment 023 -- hex digit counting program -- your name here" << endl;
  string instring;
  
  while (true)
  {
    cout << "Enter a line of text: " << endl;
    getline(cin, instring);
    convert (instring);
    if (instring == "") break;
    char b;
    int count = 0, sum = 0;
    for (b = 'a'; count <= 5; count++) 
        {
          int number = vcount(instring,b); 
          sum += number;
          cout << setw(4) << fixed << setprecision(0) << number << " " << b << "'s" << endl; 
          b++;
        }
    cout << setw(4) << "-----" << endl;
    cout << setw(4) << sum << " Total" << endl;
  }

}

//----------------------------------------------//



// PROFESSOR'S SOLUTION:

#include <iostream>
#include <iomanip>
using namespace std;
int vcount(string x, string s)
{
  int count = 0;
  for(int i = 0; i < x.length(); i++)
    if (x.substr(i,1) == s)
      count++;
  return count;
}
int main()
{
  cout << "****CS110 Assignment 03 -- hex digit counting program -- rrnetawat" << endl << endl;
  while (true)
  {
    cout << "Enter a line of text: ";
    string txt;
    getline(cin, txt);
    if (txt == "") break;
    int ca = vcount(txt,"a") + vcount(txt,"A");
    int cb = vcount(txt,"b") + vcount(txt,"B");
    int cc = vcount(txt,"c") + vcount(txt,"C");
    int cd = vcount(txt,"d") + vcount(txt,"D");
    int ce = vcount(txt,"e") + vcount(txt,"E");
    int cf = vcount(txt,"f") + vcount(txt,"F");
    cout << setw(4) << ca << " a's" << endl;
    cout << setw(4) << cb << " b's" << endl;
    cout << setw(4) << cc << " c's" << endl;
    cout << setw(4) << cd << " d's" << endl;
    cout << setw(4) << ce << " e's" << endl;
    cout << setw(4) << cf << " f's" << endl;
    cout << "-------" << endl;
    cout << setw(4) << ca + cb + cc + cd + ce + cf << " Total" << endl; 
  }

}
