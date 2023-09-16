#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct topic
{
	string name, title, date;
};

int main()
{
	setlocale(0, " ");
	std::vector<topic>topics;
	topic test1;
	ifstream in("in.txt");
	if (in.is_open()) {
		while (!in.eof()) {
			in >> test1.name >> test1.title >> test1.date;
			topics.push_back(test1);
		}
	}
	for (int i = 0; i < topics.size(); ++i) {
		test1 = topics[i];
		cout << test1.name << " " << test1.title << " " << test1.date << endl;
	}
	return 0;
}