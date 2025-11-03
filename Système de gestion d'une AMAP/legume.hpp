#pragma once	
#include <string>
#include <vector>
using namespace std;

class legume {
	string nom;
	bool bio;
	double distance;
public:
	legume(string nom, bool bio, double distance) : nom(nom), bio(bio), distance(distance) {};
	legume(string nom) : nom(nom), bio(true), distance(0.2f) {};
	legume(const legume& l) :nom(l.nom), bio(l.bio), distance(l.distance) {};

	double get_distance() const { return distance; };
	string get_nom() const { return nom; };
	bool get_bio() const { return bio; };

	void set_distance(double d) { distance = d; }
	void set_distance(string n) { nom = n; }
	void set_bio(bool b) { bio = b; }

};

bool operator<(const legume& l1, const legume& l2);
