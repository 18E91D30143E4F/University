// Fakultet.h
#pragma once

#include <string>

class Fakultet {

public:
	void setFacultetName(std::string);
	std::string getFacultetName();
private:
	std::string fakultetName;
};
