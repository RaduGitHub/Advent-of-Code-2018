#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

int x[2000][2000];
int main() {
	//part one
	//ifstream f("Text.txt");

	//string s;
	////bool x[1000][1000];
	//int k1, k2;
	//int ajutor1, ajutor2, ajutor3, ajutor4;
	//int counter = 0;

	//while (!f.eof()) {

	//	getline(f,s);
	//	k1 = s.find('@');
	//	k2 = s.find(',');
	//	ajutor1 = 0;
	//	ajutor2 = 0;
	//	ajutor3 = 0;
	//	ajutor4 = 0;
	//	
	//	for (int m = k1 + 2; m < k2; m++) {
	//		ajutor1 = ajutor1 * 10 + s[m] - '0';
	//	}
	//	//cout << ajutor << endl;

	//	k1 = k2;
	//	k2 = s.find(':');
	//	for (int m = k1+1; m < k2; m++) {
	//		ajutor2 = ajutor2 * 10 + s[m] - '0';
	//	}
	//	//cout << ajutor2<<endl;
	//	
	//	k1 = k2;
	//	k2 = s.find('x');
	//	for (int m = k1 + 2; m < k2; m++) {
	//		ajutor3 = ajutor3 * 10 + s[m] - '0';
	//	}
	//	//cout << ajutor3<<endl;
	//	
	//	k1 = k2;
	//	k2 = s.length();
	//	for (int m = k1 + 1; m < k2; m++) {
	//		ajutor4 = ajutor4 * 10 + s[m] - '0';
	//	}
	//	//cout << ajutor4 << endl;
	//	
	//	for (int i = ajutor1; i < ajutor1 + ajutor3; i++) {
	//		for (int j = ajutor2; j < ajutor2 + ajutor4; j++) {
	//			x[i][j]++;
	//		}
	//	}

	//}
	//for (int i = 0; i < 2000; i++) {
	//	for (int j = 0; j < 2000; j++) {
	//		if (x[i][j] > 1) {
	//			counter++;
	//		}
	//	}
	//}
	//cout<<counter;

	//part 2
	ifstream f("Text.txt");

	string s;
	int k1, k2;
	int ajutor1, ajutor2, ajutor3, ajutor4;
	int counter = 0;
	int it = 0;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	while (!f.eof()) {
		it++;
		getline(f, s);
		k1 = s.find('@');
		k2 = s.find(',');
		ajutor1 = 0;
		ajutor2 = 0;
		ajutor3 = 0;
		ajutor4 = 0;

		for (int m = k1 + 2; m < k2; m++) {
			ajutor1 = ajutor1 * 10 + s[m] - '0';
		}
		//cout << ajutor << endl;
		v1.push_back(ajutor1);

		k1 = k2;
		k2 = s.find(':');
		for (int m = k1 + 1; m < k2; m++) {
			ajutor2 = ajutor2 * 10 + s[m] - '0';
		}
		//cout << ajutor2<<endl;
		v2.push_back(ajutor2);

		k1 = k2;
		k2 = s.find('x');
		for (int m = k1 + 2; m < k2; m++) {
			ajutor3 = ajutor3 * 10 + s[m] - '0';
		}
		//cout << ajutor3<<endl;
		v3.push_back(ajutor3);

		k1 = k2;
		k2 = s.length();
		for (int m = k1 + 1; m < k2; m++) {
			ajutor4 = ajutor4 * 10 + s[m] - '0';
		}
		//cout << ajutor4 << endl;
		v4.push_back(ajutor4);

		for (int i = ajutor1; i < ajutor1 + ajutor3; i++) {
			for (int j = ajutor2; j < ajutor2 + ajutor4; j++) {
				if (x[i][j] == 0) {
					x[i][j] = it;
				}
				else x[i][j] = -1;
			}
		}
		
	}
	int i;
	for (i = 0; i < it; i++) {
		bool ok = true;
		for (int j = v1[i]; j < v1[i] + v3[i]; j++) {
			for (int k = v2[i]; k < v2[i] + v4[i]; k++) {
				if (x[j][k] != i+1) {
					ok = false;
				}
			}
		}
		if (ok == true) {
		cout << i+1;
		return 0;
		}
	}

	cout << i + 1;
	return 0;
}