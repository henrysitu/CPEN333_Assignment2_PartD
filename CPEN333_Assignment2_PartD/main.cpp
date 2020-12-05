#include <stdio.h>
#include <iostream>
#include <string>

//#include "academicRecords.h"
//#include "bank.h"
//#include "president.h"
//#include "professor.h"
//#include "selectionAlgorithm.h"
//#include "selectionForm.h"
//#include "SSCWebsite.h"
//#include "student.h"

#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\academicRecords.h"
#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\bank.h"
#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\president.h"
#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\professor.h"
#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\selectionAlgorithm.h"
#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\selectionForm.h"
#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\SSCWebsite.h"
#include "E:\UBC\2020-2021\CPEN 333\Assignments\Assignment 2\Assignment2PartD\CPEN333_Assignment2_PartD\student.h"

int main(void) {

	string aCourse = "MECH420";
	int totalCredits = 3;
	float aStudentGrade = 90.0;

	// student
	bank* bankAccount;
	SSCWebsite* SSCAccount;
	selectionForm* preferenceForm;
	int studentNum = 12345678;
	string studentName = "AStudent";
	secYearSelectionForm selectionForm;
	selectionForm.firstChoice = "MECH";
	selectionForm.secondChoice = "CPEN";
	selectionForm.thirdChoice = "ELEC";
	selectionForm.personalStatement = "abc";

	string SSCuserID;
	string SSCPassword;
	vector<string> enrolledCourses;


	// academic records
	float gpa = 3.8;
	transcript transcripts;
	string program = "MECH";
	cheatingRecords studentCheatingRecords;

	// bank 
	float bankBalance = 10000;
	SSCWebsite* ssc;

	// president
	///ssc
	/// 
	// professor
	int numStudents = 1;
	studentGrades student1Grade;
	student1Grade.studentNumber = studentNum; // needs to be the same as student
	student1Grade.grade = aStudentGrade;
	string courseToSubmitGrade = "MECH420";
	///ssc

	// selection algorithm
	academicRecords* records;
	selectionForm* filledForm;
	///float gpa;
	
	// selection form
	///no private var
	
	// SSC Website
	studentInfo info;
	info.studentNumber = studentNum;
	info.name = studentName;
	info.courses.push_back(aCourse);
	info.grades.push_back(aStudentGrade);
	int credits = totalCredits;
	///string program
	bool suspended = false;
	float fees = 3000;
	enrolledCourses listOfCourses;
	listOfCourses.enrolledCourses.push_back(aCourse);
	listOfCourses.grades.push_back(aStudentGrade);
	listOfCourses.credits = totalCredits;

	string courseToRegister = "CPEN333";
	int userInput;
	int amount = 5000;

	
	while (1)
	{
		cout << "If the user is a student: \n";
		cout << "Enter \n1: register courses \n2: pay fees \n3: submit application\n";
		cin >> userInput;

		if (userInput == 1) // register courses
		{
			Student1.registerForCourse(courseToRegister);
		}
		else if (userInput == 2)
		{
			Student1.payFees(amount);
		}
		else if (userInput == 3)
		{
			Student1.submitSelectionForm();
		}

		cout << "If the user is a professor: \n";
		cout << "Enter \n1: Submit course grades\n";
		cin >> userInput;

		if (userInput == 1) // register courses
		{
			Professor1.submitGrades();
		}
	}
	return 0;
};