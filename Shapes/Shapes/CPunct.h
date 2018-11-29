#ifndef CPUNCT_H
#define CPUNCT_H

#include<iostream>
//#include"CForma.h"
using namespace std;

class CPunct {
protected:
	int x;
	int y;
public:
	CPunct(int = 0, int = 0);
	void set_CPunct(int , int );
	int get_x() { return x; }
	int get_y() { return y; }
	void print_shape_name() { cout << "Punct: "; }
	void printf() const;
	//friend double distance(int x1, int y1, int x2, int y2);
};

#endif