// Fakultet.cpp

#include "Fakultet.h"

Fakultet::Fakultet() {}

Fakultet::Fakultet(std::string fakultetName) {
	Fakultet::fakultetName = fakultetName;
}

Fakultet::~Fakultet() {}

void Fakultet::setFacultetName(std::string facultetName) {
	Fakultet::fakultetName = facultetName;
}

std::string Fakultet::getFacultetName() {
	return fakultetName;
}
