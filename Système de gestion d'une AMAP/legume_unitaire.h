#pragma once
#include "legume.h"
class legume_unitaire :
    public legume
{
protected:
    int nombre;
    double prix_unitaire;
public:
    legume_unitaire(string nom, bool bio, double distance, int nombre, double prix_unitaire) :legume(nom, bio, distance), nombre(nombre), prix_unitaire(prix_unitaire) {};
    
    int get_nombre() const { return nombre; };
    double get_prix() const { return prix_unitaire; };
    double prix() const{ return nombre * prix_unitaire; }
    void afficher(ostream& os) const override;
};

