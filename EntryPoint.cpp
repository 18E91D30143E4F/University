#include <iostream>
#include <array>
#include <algorithm>

#include "Student.h"

void printStudentInfo(Student* student) {
	std::cout << "Студент: " << student->getFullName() << std::endl;
	std::cout << "Факультет: " << student->getFacultetName() << std::endl;
	std::cout << "Год рождения: " << student->getYearOfBirth() << std::endl;
	std::cout << "Отметки за сессию: ";
	int* marks = student->getMarks();
	if (marks != nullptr)
	{
		for (int i = 0; i < student->getMarksCount(); ++i, ++marks) {
			std::cout << *marks << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "Средний балл: " << student->getAverageMark() << "\n\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");

	const int studentsCount = 4;
	std::array<Student*, studentsCount> students;

	students[0] = new Student("Мельникова Ксения Витальевна", "ФИТУ", 2002);
	students[0]->setMarks(new int[] {5, 5, 4, 5}, 4);

	students[1] = new Student("Иванова София Ивановна", "ФРЭ", 2001);
	students[1]->setMarks(new int[] {7, 5, 9, 7}, 4);

	students[2] = new Student("Фурсова Елизавета Владимировна", "ФКСИС", 2002);
	students[2]->setMarks(new int[] {10, 9, 9, 9}, 4);

	students[3] = new Student("Кайратона Ирина Нурсултанона", "ФКСИС", 2000);
	students[3]->setMarks(new int[] {5, 4, 9, 9}, 4);

	for (auto stud : students) {
		printStudentInfo(stud);
	}

	std::cout << "Студенты отсортированные по убыванию отметок: " << std::endl;
	std::sort(students.begin(), students.end(), [](Student* a, Student* b) {
		return a->getAverageMark() > b->getAverageMark();
		});
	for (auto stud : students) {
		printStudentInfo(stud);
	}

	for (auto stud : students) {
		delete stud;
	}

	return 0;
}