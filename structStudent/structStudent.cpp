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

void inputData(Student& s)
{
	cout << "Enter id: "; 
	cin >> s.id; 

	cout << "Enter name: "; 
	cin >> s.name; 

	cout << "Enter major: "; 
	cin >> s.major; 
	cout << endl; 

}

Student studentFn(int sId, string sName, string sMajor)
{
	Student temp; 
	temp.id = sId; 
	temp.name = sName; 
	temp.major = sMajor; 
	return temp; 
}
void printData(Student s)
{
	cout << s.id << " " << s.name << " " << s.major << endl;

}

