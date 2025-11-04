
#include "legume_unitaire.h"

void legume_unitaire::afficher(ostream& os) const
{
	os << get_nom() << get_bio() << get_d() << get_nombre() << get_prix() << prix() << endl;
}
