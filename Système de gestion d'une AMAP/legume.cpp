#include "legume.h"
using namespace std;

bool operator<(const legume& l1, const legume& l2)
{
	return (l1.get_d() < l2.get_d());
}

ostream& operator<<(ostream& os, const legume& l)
{
	l.afficher(os);
	return os;
}
