#include <iostream>
#include <fstream>

using namespace std;

//int ap1[1000000];
//int ap2[1000000];

int main() {
	//part one
	/*int k;
	int freq = 0;
	int i = 0;

	ifstream input("input.txt");

	while (!input.eof()) {
		input >> k;
		freq = freq + k;
		cout<<i <<" "<< freq << endl;
		i++;
	}

	cout << freq;*/

	
	//part two
	int k;
	int freq = 0;
	int ap1[1000000] = { 0 };
	int ap2[1000000] = { 0 };
	long nums[1000];
	int i = 0;

	ifstream input("input.txt");

	ap1[0]++;

	while (!input.eof()) {
		input >> k;
		nums[i] = k;
		i++;
		freq = freq + k;
		//cout << freq << endl;
		if (freq >= 0) {
			ap1[freq]++;
		}
		else {
			int a = abs(freq);
			cout << abs(freq);
			ap2[a]++;
		}

		if (ap1[freq] == 2 || ap2[abs(freq)]==2) {
			cout << freq;
			break;
		}
	}
	
	int ok = 1;
	if (ap1[freq] != 2 && ap2[abs(freq)] != 2) {
		while (ok != 0) {
			for (int j = 0; j < i; j++) {
				freq = freq + nums[j];
				if (freq >= 0) {
					ap1[freq]++;
				}
				else {
					int a = abs(freq);
					ap2[a]++;
				}
				if (ap1[freq] == 2 || ap2[abs(freq)]==2) {
					cout << freq;
					ok = 0;
					break;
				}
			}
		}
	}
		
	
	


	return 0;
}