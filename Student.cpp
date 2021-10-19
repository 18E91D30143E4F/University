// Student.cpp

#include "Student.h"

Student::Student() { }

Student::Student(std::string fullName, std::string fukultetName, int yearOfBirth) : Fakultet(fukultetName) {
	Student::fullName = fullName;
	Student::yearOfBirth = yearOfBirth;

	Student::marksCount = 0;
	Student::marks = nullptr;
	Student::averageMark = 0;
}

Student::~Student() {
	delete[] marks;
	marks = nullptr;
	std::cout << "Объект " << fullName << " удален" << std::endl;
}

void Student::setFullName(std::string fullName) {
	Student::fullName = fullName;
}

std::string Student::getFullName() {
	return fullName;
}

void Student::setYearOfBirth(int yearOfBirth) {
	Student::yearOfBirth = yearOfBirth;
}

int Student::getYearOfBirth() {
	return yearOfBirth;
}

int Student::getMarksCount() {
	return marksCount;
}

void Student::setMarks(int marks[], int marksCount) {
	Student::marksCount = marksCount;
	Student::marks = new int[marksCount];

	for (int i = 0; i < marksCount; ++i) {
		Student::marks[i] = marks[i];
	}

	setAverageMark();
}

int* Student::getMarks() {
	return marks;
}

double Student::getAverageMark() {
	return averageMark;
}

void Student::setAverageMark() {
	Student::averageMark = 0;

	int* marks = getMarks();
	if (marks != nullptr)
	{
		for (int i = 0; i < getMarksCount(); ++i, ++marks) {
			Student::averageMark += *marks;
		}
		Student::averageMark /= Student::marksCount;
	}
}