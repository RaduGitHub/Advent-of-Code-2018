#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

int main() {

	//part one
	/*ifstream input("input.txt");*/
	//vector<int> ap(26, 0);
	/*string box;
	int id;
	int f2 = 0;
	int f3 = 0;
	int f2f = 0;
	int f3f = 0;

	while (!input.eof()) {
		getline(input, box);
		for (char i = 'a'; i <= 'z'; i++) {
			id = count(box.begin(), box.end(), i);
			if (id == 2) {
				f2 = 1;
			}
			if (id == 3) {
				f3 = 1;
			}
		}
		f3f += f3;
		f2f += f2;
		f3 = 0;
		f2 = 0;
	}

	cout << f3f * f2f;

	input.close();*/

	//part two
	ifstream input("input.txt"); 
	string box[300];
	int id;
	int i = 0;
	bool ok = false;
	int it;
	int m;
	int boxx;

	while (!input.eof()) {
		getline(input, box[i]);
		i++;
	}
	
	for (int j = 0; j < i; j++) {
		//cout << box[j][3] << endl;
		//int miss_matched = 0;
		for (int k = 0; k < i; k++) {
			m = box[j].length();
			int miss_matched = 0;
			it = 0;
			for (int l = 0; l < m; l++) {
				if (box[j][l] != box[k][l]) {
					miss_matched++;
					it = l;
					boxx = k;
				}
			}
			if (miss_matched == 1) {
				ok = true;
				break;
			}
		}
		if (ok == true) {
			break;
		}
	}

	for (int j = 0; j < m; j++) {
		if (j != it) {
			cout << box[boxx][j];
		}
	}

	cout << boxx;
	input.close();

	return 0;
}