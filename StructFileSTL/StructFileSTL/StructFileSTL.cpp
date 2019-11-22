// StructFileSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int choose;
struct Student
{
	int id;
	string name;
	float score;

};
vector <Student*> s;
void inputStudent(Student *stu)
{

	cout << "Input Student's ID: ";
	cin >> stu->id;
	cin.ignore();
	cout << "Input Student's Name: ";
	getline(cin, stu->name);

	do
	{
		cout << "Input Student's Score (must be in range 0-10): ";
		cin >> stu->score;
	} while (stu->score < 0 || stu->score>10);
	
	s.push_back(stu);
}

void outputStudent(Student *stu)
{
	cout << stu->id << "\t" << stu->name << "\t\t" << stu->score << endl;
}

void showVector ()
{
	cout << "ID\tFULLNAME\t\tSCORE" << endl;
	for (int i = 0; i < s.size(); i++) outputStudent(s[i]);
}
void loadFile(string path)
{
	fstream f;
	f.open(path, ios::in);
	if (f.fail())
		cout << "Failed to open this file" << endl;
	Student *stu;
	while (!f.eof())
	{
		f >> stu->id;
		//f.getline(stu->name);
		f >> stu->score;
	}
	f.close();
}
void saveFile(string path)
{
	fstream f;
	f.open(path, ios::out);

}
void display()
{
	cout << "------------------MENU------------------" << endl;
	cout << "1. Input \n2.Display \n3. Save to file \n4. Load from file \n0. Exit \n";
	cout << "----------------------------------------" << endl;
	cout << "Choose: ";
}
int main()
{
	//display();
	Student a;
	for (int i=0; i<3; i++)
		inputStudent(&a);
	//outputStudent(&a);
	showVector();
	system("pause");
    return 0;
}

