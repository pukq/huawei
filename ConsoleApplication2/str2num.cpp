#include<vector>
#include<string>
#include"string.h"
using namespace std;

vector<int> str2num(string str) {
	str.erase(str.begin());
	str.erase(str.end() - 1);

	vector<int> temp;
	char* s_input = (char*)str.c_str();
	const char* split = ",";//ÒÔ¶ººÅÎª·Ö¸î·û

	char* p = strtok(s_input, split);

	int a;
	while (p != NULL) {
		//char* -> int
		sscanf(p, "%d", &a);
		temp.push_back(a);
		p = strtok(NULL, split);
	}

	return temp;
}