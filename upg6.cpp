#include <iostream>
#include <map>
using namespace std;

int main()
{

	map<string,int> my_map;
	my_map["kaffe"] = 2;
	my_map["kaffe"] = 536;
	cout << my_map["kaffe"] << endl;
}