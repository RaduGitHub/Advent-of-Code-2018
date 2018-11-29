#ifndef CDREAPTA_H
#define CDREAPTA_H

#include<iostream>
#include"CPunct.h"
#include"CForma.h"

using namespace std;

class CDreapta : public CForma {
protected:
	CPunct punct1;
	CPunct punct2;
	double distanta;
public:
	CDreapta();
	void calcul_distanta();
	void print_shape_name() const {cout << "Dreapta: "; }
	//void print()  ;
};

#endif