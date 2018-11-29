#ifndef CDREPTUNGHI_H
#define CDREPTUNGHI_H

#include <iostream>
#include "CDreapta.h"
#include "CForma.h"
#include "CPunct.h"

using namespace std;

class CDreptunghi : public CForma {
protected:
	CPunct punct1, punct2, punct3, punct4;
	double latura_mica, latura_mare;
public:
	CDreptunghi(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
	double area();
	double perimeter();
	void print_shape_name() const { cout << "Dreptunghi: "; }
};

#endif // !CDREPTUNGHI_H
