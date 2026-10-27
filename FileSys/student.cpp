#include "student.h"
#include <iostream>
#include <fstream>

Student::Student()
{
	this->name = "";
	this->surname = "";
	this->university = "";
	this->age = 0;
}

Student::Student(std::string n, std::string sn, std::string uni, int a)
{
	name = n;
	surname = sn;
	university = uni;
	age = a;
}

void Student::Input()
{
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter surname: ";
	std::cin >> surname;
	std::cout << "Enter university: ";
	std::cin >> university;
	std::cout << "Enter age: ";
	std::cin >> age;
}

void Student::Print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Surname: " << surname << std::endl;
	std::cout << "University: " << university << std::endl;
	std::cout << "Age: " << age << std::endl;
}

void Student::WriteFile(std::string filename)
{
	std::ofstream bam(filename, std::ios::app | std::ios::out);
	bam << name << std::endl;
	bam << surname << std::endl;
	bam << university << std::endl;
	bam << age << std::endl;
	bam.close();
}

void Student::ReadFile(std::string filename)
{
	std::ifstream read(filename);
	getline(read, name);
	getline(read, surname);
	getline(read, university);
	read >> age;
	read.close();
}



int main() {
	Student s1;
	s1.Input();
	s1.Print();
	s1.WriteFile("students.txt");
	Student s2;
	s2.ReadFile("students.txt");
	s2.Print();
	return 0;
}