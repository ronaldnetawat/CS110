//1

A program simulation that creates a random integer 1,2,3 or 4 to move a particle on a x-y coordinate plane, where:
1 = y++
2 = x++
3 = y--
4 = x--

#include <iostream>
using namespace std;
int randwalk()
{
    return(int)((1.0*rand()/RAND_MAX)*4.0+1.0);
}
int main()
{
    srand(time(0));
    cout << "Drunkard's walk simulation -- rrnetawat" << endl << endl;
    int x = 0;
    int y = 0;
    for(int i = 0; i < 10000; i++)
    {
        int z = randwalk();
        switch(z)
        {
            case 1: y++; break;
            case 2: x++; break;
            case 3: y--; break;
            case 4: x--; break;
            default: cout << "Something is really wrong!" << endl;
        }
    }
    cout << "Final position: x = " << x << " , y = " << y << endl;
    return 0;
}

----------------------------------------------------------------------
// 2
Car Door Game Problem Simulation:

#include <iostream>
using namespace std;
int randoor()
{
  return(int)((1.0*rand()/RAND_MAX)*3.0+1);
}
int main()
{
  srand(time(0));
  cout << "3-door game show -- rrnetawat" << endl << endl;
  int cno = 0;
  int cyes = 0;
  for(int i = 0; i < 1000000; i++)
  {
    int dc = randoor();
    int dp = randoor();
    int dopen;
    while(true)
    {
      int dopen = randoor();
      if(dopen != dc && dopen != dp) break;
    }
    if(dc == dp)
      cno++;
    else
      cyes++;
  }
  cout << "Wins for not changing: " << cno << endl;
  cout << "Wins for changing: " << cyes << endl;
}

----------------------------------------------------------------------


// 3
Gambling Simulation of rolling the dice four times:
- (bool six = False)
- generate a random number b/w 1 and 6.
- if it is a 6, then [six = True; break;]
- if (six)
    de Mere wins
  else
    de Mere loses.
    
    
#include <iostream>
using namespace std;
int randdie()
{
  return(int)((1.0*rand()/RAND_MAX)*6.0+1.0);
}
int main()
{
  srand(time(0));
  cout << "de Mere version 1 -- rrnetawat" << endl << endl;
  int win = 0;
  int lose = 0;
  for(int i = 0; i<10000; i++)
  {
    bool six = false;
    for(int k = 0; k = 4; k++)
    {
      int z = randdie();
      if(z == 6)
      {
        six = true;
        break;
      }
    }
    if(six)
      win++;
    else
      lose++;
  }
  cout << "Wins: " << win << "." << endl;
  cout << "Loses: " << lose << "." << endl;
}


Version 2: 2 die are thrown:

#include <iostream>
using namespace std;
int randdie()
{
  return(int)((1.0*rand()/RAND_MAX)*6.0+1.0);
}
int main()
{
  srand(time(0));
  cout << "de Mere version 1 -- rrnetawat" << endl << endl;
  int win = 0;
  int lose = 0;
  for(int i = 0; i<10000; i++)
  {
    bool twelve = false;
    for(int k = 0; k < 24; k++)
    {
      int z = randdie();
      int z2 = randdie();
      if(z +z2 == 12)
      {
        twelve = true;
        break;
      }
    }
    if(twelve)
      win++;
    else
      lose++;
  }
  cout << "Wins: " << win << "." << endl;
  cout << "Loses: " << lose << "." << endl;
}





