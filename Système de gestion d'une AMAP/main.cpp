#include "legume.h"
#include "legume_unitaire.h"
#include <iostream>
using namespace std;

legume l1("carotte", true, 0.1f);
legume l2("tomate", false, 0.3f);
legume_unitaire l3("tomate", false, 0.3f,1,1);

int main() {
	cout << "l1<l2 ?" << (l1 < l2) << endl;
	cout << l1 << endl;
	l1.afficher(cout);
	l3.afficher(cout);
	return 0;
}