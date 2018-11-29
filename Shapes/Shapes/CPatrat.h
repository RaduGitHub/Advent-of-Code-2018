#ifndef CPATRAT_H
#define CPATRAT_H

#include <iostream>
#include "CDreapta.h"
#include "CForma.h"
#include "CPunct.h"

using namespace std;

class CPatrat : public CForma {
protected:
	CPunct punct1, punct2, punct3, punct4;
	double latura;
public:
	CPatrat(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
	double area() ;
	double perimeter() ;
	void print_shape_name() const { cout << "Patrat: "; }
	//void CPatratt(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
	//virtual void print() const;
	//void print();
};

#endif
