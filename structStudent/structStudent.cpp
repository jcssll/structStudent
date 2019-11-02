// structStudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

struct Student
{
	int id; 
	string name; 
	string major; 
};

void inputData(Student& s); 
Student studentFn(int sId, string sName, string sMajor);
void printData(Student s);

int main()
{
	Student s1; // Declared variable s1 of Student type
	inputData(s1);

	cout << "sId" << " " << "Name" << " " << "Major" << endl;
	printData(s1);

	Student s2, s3, s4;
	s2 = studentFn(222, "Bob", "English"); 
	printData(s2);

	s3 = studentFn(333,"Mike", "Math" );
	printData(s3);

	s4 = studentFn(444, "Janet", "Computer Science"); 
	printData(s4);

	cin.clear(); 
	cin.ignore();
	cin.get();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
