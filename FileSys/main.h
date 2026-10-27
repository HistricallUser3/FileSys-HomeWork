#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Car
{
	string model;
	double price;
public:
	Car() {}
	Car(string mod, double pr)
	{
		model = mod;
		price = pr;
	}
	void Print()
	{
		cout << "Model: " << model << "\tPrice: " << price << endl;
	}
	void WriteFile(string file)
	{
		ofstream write(file, ios::app | ios::out);
		write << "Model: " << model << " Price: " << price << endl;
		write.close();
	}
	static void ReadFile(string file) // static method
	{
		ifstream read(file, ios::in);
		char buffer[50];
		do
		{
			read.getline(buffer, 50);
			cout << buffer << endl;

		} while (read);

		read.close();

	}
};