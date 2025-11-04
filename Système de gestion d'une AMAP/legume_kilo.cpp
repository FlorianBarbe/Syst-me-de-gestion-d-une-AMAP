#include "legume_kilo.hpp"

void legume_kilo::afficher(ostream& os) const
{
	os << get_nom() << get_bio() << get_d() << get_p() << get_prix() << prix() << endl;
}
