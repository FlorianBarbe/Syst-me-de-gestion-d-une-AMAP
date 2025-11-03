#include "legume.hpp"
#include <iostream>
using namespace std;

bool operator<(const legume& l1, const legume& l2)
{
	return (l1.get_distance() < l2.get_distance());
}
