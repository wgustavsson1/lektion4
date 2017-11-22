#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	cout << "Mata in ett flyttal: " << endl;
	string s;
	double d;

	cin >> s;
	stringstream ss(s);
	ss >> d;
	cout << d << endl;
	if(ss >> s)
	{
		cerr << "Fel inmatning!" << endl;
	}
}