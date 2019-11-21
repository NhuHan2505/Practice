// StructFileSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Student
{
	int id;
	string name;
	float score;
};
void inputStudent(Student std)
{
	cout << "Input Student's ID: ";
	cin >> std.id;
	cout << "Input Student's Name: ";
	cin >> std.name;
	do
	{
		cout << "Input Student's Score (must be in range 0-10): ";
		cin >> std.score;
	} while (std.score < 0 || std.score>10);
}

void outputStudent(Student std)
{
	cout << "ID: " << std.id << "\t" << "Name: " << std.name << "\t" << "Score: " << std.score << endl;
}
void showVector(vector <Student> std)
{
	for (int i = 0; i < std.size(); i++) outputStudent(std[i]);
}
int main()
{
	vector <Student> std;
	Student a;
	inputStudent(a);
    return 0;
}

