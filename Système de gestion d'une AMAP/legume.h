#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class legume
{
	string nom;
	bool bio;
	double distance;
public:
	legume(string nom, bool bio, double distance) :nom(nom), bio(bio), distance(distance) {};
	legume(string nom):nom(nom), bio(true), distance(0.2f) {};
	legume(const legume& l):nom(l.nom),bio(l.bio),distance(l.distance) {};
	
	double get_d() const { return distance; }
	bool get_bio() const { return bio; }
	string get_nom() const { return nom; }

	void set_nom(const string n) { nom = n; }
	void set_d(const double d) { distance = d; }
	void set_b(const bool b) { bio=b; }

	virtual void afficher(ostream& os) const {
		os << nom << bio << distance << endl;
	}

};

bool operator<(const legume& l1, const legume & l2);
ostream& operator<< (ostream& os, const legume& l);