#include <iostream>
using namespace std;

string ethcheck(string s)
{
	string legal = "0123456789abcdefABCDEF:";
	
	//Check for illegal character in s
	for(int i=0; i<s.length(); i++)
	{
		if(legal.find(s.substr(i,1),0) == string::npos)
			return "Illegal Character";
			
	}
	//changing uppercase to lowercase
	string up = "ABCDEF";
	string low = "abcdef";
	for(int i=0; i<s.length(); i++)
	{	
		int k = up.find(s.substr(i,1),0);
		if(k != string::npos)						//up.substr(k,1) = low.substr(k,1)
			s.replace(i,1,low.substr(k,1));
		
	}
	//checking fields by counting colons
	int ccount = 0;
	for(int i=0; i<s.length(); i++)
		if(s.substr(i,1) == ":")
			ccount++;
	if(ccount<5)
		return "Too few fields";
	else 
		if(ccount>5)
			return "Too many fields";
	//fix individual fields if necessary
	string t = "";
	s = s+":";
	while(true)
	{
		int j = s.find(":",0);
		if(j == string::npos) break;
		string x = s.substr(0,j);
		s = s.substr(j+1);
		if(x.length() < 2)
			x = "0"+x;
		t = t + x + ":";
	}
	t = t.substr(0,t.length()-1);
	if(t.length()>17)
		return "Address fields too long.";
	return t;
}


int main()
{
	cout << "Ethernet Address checking program -- rrnetawat" << endl << endl;
	string x;
	while(true)
	{
		cout << "Enter an ethernet address: ";
		getline(cin,x);
		if(x == "") break;
		cout << ethcheck(x) << endl << endl;
		
	}
	return 0;
}
