// UniversityStudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
#include <stdio.h>
using namespace std;

unsigned int choice, n;
unsigned int id[100];
float grade[100];
int EnterInformation(), PrintInformation(), HighestGrade(), LowestGrade();

void Menu() {
	cout << " _________________________________" << endl;
	cout << "| 1. Enter student information.   |" << endl;
	cout << "| 2. Print student information.   |" << endl;
	cout << "| 3. Students has highest grade.  |" << endl;
	cout << "| 4. Students has lowest grade.   |" << endl;
	cout << "| 5. Quit.                        |" << endl;
	cout << "|_________________________________|" << endl;
}

int EnterInformation() {
	cout << "Enter the number of students: ";
	cin >> n;

	cout << "--------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\nStudent's ID " << i + 1 << ": ";
		cin >> id[i];
		cout << "Student's grade " << i + 1 << ": ";
		cin >> grade[i];
	}
	cout << "*******************************" << endl;
	return 0;
}

int PrintInformation() {
	cout << "*****STUDENT'S INFORMATION*****" << endl;
	for (int i = 0; i < n; i++) {
		cout << "ID: " << id[i];
		cout << "\t\tGrade: " << grade[i] << endl;
	}
	cout << "*******************************" << endl;
	return 0;
}

int HighestGrade() {
	float highestStudentGrade = 0;
	unsigned int highestStudentID = 0;
	
	for (int i = 0; i < n; i++) {
		if (grade[i] > highestStudentGrade) {
			highestStudentGrade = grade[i];
			highestStudentID = id[i];
		}
	}

	cout << "*******************************" << endl;
	cout << "The student " << highestStudentGrade << " has highest grade " << highestStudentGrade << endl;
	cout << "*******************************" << endl;
	return 0;
}

int LowestGrade() {
	float lowestStudentGrade = 10;
	unsigned int lowestStudentID = 0;

	for (int i = 0; i < n; i++) {
		if (grade[i] < lowestStudentGrade) {
			lowestStudentGrade = grade[i];
			lowestStudentID = id[i];
		}
	}

	cout << "*******************************" << endl;
	cout << "The student " << lowestStudentGrade << " has highest grade " << lowestStudentGrade << endl;
	cout << "*******************************" << endl;
	return 0;
}

int main()
{
	do
	{
		Menu();

		cout << "Your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			EnterInformation();
			break;
		case 2:
			PrintInformation();
			break;
		case 3:
			HighestGrade();
			break;
		case 4:
			LowestGrade();
			break;
		case 5: 
			cout << "THE PROGRAM HAS STOPPED";
			break;
		default:
			cout << "Invalid value! Please retype: ";
			cin >> choice;
			break;
		}
	} while (choice < 5);
	return 0;
}

