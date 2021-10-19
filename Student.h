// Student.h
#pragma once

#include <iostream>

#include "Fakultet.h"

class Student : public Fakultet {
public:
	Student();
	Student(std::string fullName, std::string fukultetName, int yearOfBirth);
	~Student();
	void setFullName(std::string fullName);
	std::string getFullName();
	void setYearOfBirth(int yearOfBirth);
	int getYearOfBirth();
	int getMarksCount();
	void setMarks(int marks[], int marksCount);
	int* getMarks();
	double getAverageMark();
private:
	std::string fullName;
	int yearOfBirth;
	int* marks;
	int marksCount;
	double averageMark;

	void setAverageMark();
};