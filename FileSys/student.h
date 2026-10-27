#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Student {
	std::string name;
	std::string surname;
	std::string university;
	int age;
public:
	Student();
	Student(std::string n, std::string sn, std::string uni, int a);
	void Input();
	void Print();

	void WriteFile(std::string filename);
	void ReadFile(std::string filename);
};