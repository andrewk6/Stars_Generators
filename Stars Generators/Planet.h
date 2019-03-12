#pragma once
#include <string>
class Planet
{
private:
	std::string name, tag1, tag2, bio, atmos, temp, tech, pop;

public:
	Planet();
	~Planet();
	
	std::string getName() const;
	std::string getTag1() const;
	std::string getTag2() const;
	std::string getBio() const;
	std::string getAtmo() const;
	std::string getTemp() const;
	std::string getPop() const;

	void setName(std::string const &);
	void setTag1(std::string const &);
	void setTag2(std::string const &);
	void setBio(std::string const &);
	void setAtmo(std::string const &);
	void setTemp(std::string const &);
	void setPop(std::string const &);
};

