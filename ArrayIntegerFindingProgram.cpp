#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	cout << "Search algorithm #1 -- rrnetawat"  << endl << endl;
	int ar[100];
	int n = 0;
	cout << "Enter integers in order, separated by space (negative to stop): ";
	while(true)
	{
		int m;
		cin >> m;
		if(m<0) break;
		ar[n++] = m;
	}

  // Search the array for the given number
  while(true)
  {
    cout << "Enter an integer to search for (negative to quit): ";
    int m;
    cin >> m;
    if(m<0) break;
    int left = 0;
	int right = n - 1;
	int i;
	while(left + 1 < right)
	{
		i = (left + right)/2;
		if(ar[i] == m) break;
		if(ar[i] < m)
			left = i;
		else 
			right = i;
	}
	if(ar[left] != m && ar[right] != m && ar[i] != m)
		cout << "Integer not found." << endl;
	else
		if(ar[i] == m)
			cout << "Integer found at position " << i << endl;
		else 
			if(ar[left] == m)
				cout << "Integer found at position " << left << endl;
			else
				cout << "Integer found at position " << right << endl;
				
  }
	
	
}
