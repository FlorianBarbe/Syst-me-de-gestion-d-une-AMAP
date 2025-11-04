#pragma once
#include"legume.h"

class legume_kilo:
public legume{
	double poids;
	double prix_kilo;
public:
	legume_kilo(string nom, bool bio, double distance, double poids, double prix_kilo) :legume(nom, bio, distance), poids(poids), prix_kilo(prix_kilo) {};
	double prix() const { return poids * prix_kilo; }

	int get_p() const { return poids; };
	double get_prix() const { return prix_kilo; };
	double prix() const { return poids * prix_kilo; };
	void afficher(ostream& os) const override;

};
