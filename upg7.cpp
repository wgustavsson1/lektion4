#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{

	map<string,vector<int>> my_map{{"hej",{1}}, {"då",{2}}};

	for(auto it = my_map.begin(); it != my_map.end(); it++)
	{
		it->second.push_back(3);
	}


	return 0;
}