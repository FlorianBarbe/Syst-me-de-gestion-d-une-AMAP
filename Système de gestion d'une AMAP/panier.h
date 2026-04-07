#pragma once
#include "legume.h"
#include <vector>
#include <ctime>
using namespace std;
class panier
{
	int num;
	vector<legume*> list;
	time_t date;
public:
	panier(int num, vector<legume*> list, time_t date) :num(num), list(list), date(date) {};
	panier(int num, time_t date) :num(num), list(), date(date) {};

	void ajouter_legume(legume& l) {
		list.push_back(&l);
	};
};

