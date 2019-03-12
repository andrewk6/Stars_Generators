#include "Planet.h"
#include <string>


Planet::Planet()
{
	name = "Default";
	tag1 = "Deafult";
}


Planet::~Planet()
{
}

std::string Planet::getName() const {
	return name;
}
std::string Planet::getTag1() const {
	return tag1;
}
std::string Planet::getTag2() const {
	return tag2;
}
std::string Planet::getBio() const {
	return bio;
}
std::string Planet::getAtmo() const {
	return atmos;
}
std::string Planet::getTemp() const {
	return temp;
}
std::string Planet::getPop() const {
	return pop;
}


void Planet::setName(const std::string &  in) {
	name = in;
}
void Planet::setTag1(const std::string &  in) {
	tag1 = in;
}
void Planet::setTag2(const std::string &  in) {
	tag2 = in;
}
void Planet::setBio(const std::string &  in) {
	bio = in;
}
void Planet::setAtmo(const std::string &  in) {
	atmos = in;
}
void Planet::setTemp(const std::string  & in) {
	temp = in;
}
void Planet::setPop(const std::string & in) {
	pop = in;
}