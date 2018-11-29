#ifndef CCERC_H
#define CCERC_H

#include <iostream>
#include "CDreapta.h"
#include "CForma.h"
#include "CPunct.h"

using namespace std;

class CCerc : public CForma {
protected:
	CPunct punct;
	double raza;
public:
	CCerc(double l, int x, int y);
	double area();
	//double perimeter();
	void print_shape_name() const { cout << "Cerc: "; }
};

#endif // !CCERC_H
