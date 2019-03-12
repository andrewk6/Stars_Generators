#include <cstdlib>
#include <list>
#include "Planet.h"
#pragma once

class Planet_Builder
{
private:
	std::list <Planet> planets;

public:
	Planet_Builder();
	~Planet_Builder();

	Planet generatePlanet();

	void listPlanets();
	void write(const Planet &);
};

