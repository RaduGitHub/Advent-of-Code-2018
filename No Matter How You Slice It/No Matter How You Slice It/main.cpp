#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
	string a;
	int mat[1000][1000] = { 0 };

	ifstream input("input.txt");

	getline(input,a);

	//char *p;
	char *str = new char[a.length() + 1];
	strcpy_s(str, a.c_str());
	char *p = strtok(str, "/# @,.x:");
	cout << p;

	return 0;
}