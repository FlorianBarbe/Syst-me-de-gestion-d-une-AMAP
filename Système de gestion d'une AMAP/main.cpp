#include "legume.hpp"
#include <iostream>
using namespace std;

legume l1("carotte", true, 0.1f);
legume l2("tomate", false, 0.3f);

int main() {
	cout << "l1<l2 ?" << (l1 < l2) << endl;
	return 0;
}