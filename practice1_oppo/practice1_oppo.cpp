#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct menu
{
	string dish;
	double cost;
	string time;
};

menu create_menu(string nm, double cost, string time) {
	menu new_menu;
	new_menu.dish = nm;
	new_menu.cost = cost;
	new_menu.time = time;
	return new_menu;
}

bool check_string(string st) {
	if (st.size() == 0)
	return false;
	for (int i = 0; i < st.size(); i++)
		if ((65 <= st[i] && st[i] <= 90) || (97 <= st[i] && st[i] <= 122) || st[i] == 32) {
			continue;
		}
		else return false;
	return true;
}

bool check_number(int num) {
	if (num > 0) return true; return false;
}

bool check_time(string st) {
	if (st.length() == 5 && st[2] == ':') return true; return false;
}

void print_menu(vector<menu> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i].dish << " " << vec[i].cost << " " << vec[i].time << endl;
	}
}

int main() {
	ifstream in;
	int n;
	in.open("D:/Programming/Programs/Main/in.txt");
	if (in.is_open()) {
		in >> n;
		vector<menu> all_dishes;
		for (int i = 0; i < n; ++i) {
			string name, time;
			double num;
			in >> name >> num >> time;
			if (check_string(name) && check_number(num) && check_time(time))
				all_dishes.push_back(create_menu(name, num, time));
			else
				cout << "Wrong dish with number " << i << endl;
		}
		print_menu(all_dishes);
	}
	else cout << "No file";
}