// Fakultet.h
#pragma once

#include <string>

class Fakultet {

public:
	Fakultet();
	Fakultet(std::string fakultetName);
	~Fakultet();
	void setFacultetName(std::string);
	std::string getFacultetName();
private:
	std::string fakultetName;
};
