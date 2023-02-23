#include <iostream>
#include <cmath>
using namespace std;

string dateconv(string a)
{
	for (int i=0; i<a.length(); i++)
	{
		if(a.substr(i,1) == ",")
			a = a.replace(i,1," ");
	}
	while(true)
	{
		int i = a.find("  ",0);
		if(i == string::npos) break;
		a = a.replace(i,2," ");
	}
	
	if(a.substr(0,1) == " ")
		a = a.substr(1);
	
	if((a.length() > 0) && a.substr(a.length()-1, 1) == " ")
		a = a.substr(0,a.length()-1);
	int k = a.find(" ",0);
	string month = a.substr(0,k);
	int m = a.find(" ", k+1);
	string day = a.substr(k+1,m-k-1);
	string year = a.substr(m+1);
	// decapitalize month if necessary
	string uc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string lc = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < month.length(); i++)
	{
		int p = uc.find(month.substr(i,1));
		if (p != string::npos)
			month.replace(i,1,lc.substr(p,1));
	}
	// get numberic month
	string mnames = "janfebmaraprmayjunjulaugsepoctnovdec";
	string mnums = "01 02 03 04 05 06 07 08 09 10 11 12 ";
	month = month.substr(0,3);
	int nmth = mnames.find(month,0);
	string mnum = mnums.substr(nmth,3);
	mnum = mnum.substr(0,2);
	// make suer day has two digits
	if(day.length() < 2)
		day = "0" + day;
	//combine year, mn=onth, and day
	a = year + mnum + day;
	return a;
}
int main ()
{
	cout << "Assignment 04 -- date conversion -- rrnetawat" << endl << endl;
	cout << "Enter an alphabetic date: " << endl;
	string alphdate;
	getline(cin, alphdate);
	cout << dateconv(alphdate) << endl;
	return 0;

}



