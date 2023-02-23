#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "CS 110 Assignment -- rrnetawat" << endl << endl;
	ifstream infile;
	infile.open("h:\\Math_CS\\HDWIEBE\\cs110\\public\\namedob.txt");
	if(!infile.is_open())
	{
		cout << "Can't open this file!\n";
		return 1;
	}
	string d1, d2;
	cout << "Enter the early date: ";
	getline(cin, d1);
	cout << "Enter the later date: ";
	getline(cin, d2);
	while(true)
	{
		string s;
		getline(infile, s);
		if(infile.eof()) break;
		string t = s.substr(24, 9);
		string mnames = "JanFebMarAprMayJunJulAugSepOctNovDec";
		string mnums = "01 02 03 04 05 06 07 08 09 10 11 12 ";
		int i = mnames.find(t.substr(0,3),0);
		if(i == string::npos)
			cout << "Error in file record\n";
		else
		{
			string date8 = t.substr(5,4) + mnums.substr(i,2) + t.substr(3,2);
			if(date8 >= d1 && date8 <= d2)
				cout << date8 << endl;
		}
		
	}
	infile.close();
	return 0;
}
