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

void outputStudent(Student std)
{
	cout << "ID: " << std.id << "\t" << "Name: " << std.name << "\t" << "Score: " << std.score << endl;
}

int main()
{
	vector <Student> std;
    return 0;
}

