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
	academicRecords academicRecords_Student1;
	bank BankAccount_Student1;
	president thePresident;
	professor Professor1;
	selectionAlgorithm engSelectionAlgorithm;
	selectionForm SelectionForm_Student1;
	SSCWebsite sscWebsite;
	student Student1;

	int userInput;
	int amount = 5000;
	while (1)
	{
		cout << "Enter \n1: register courses \n2: pay fees \n3: submit application\n";
		cin >> userInput;

		if (userInput == 1) // register courses
		{
			Student1.registerForCourse("MECH421");
		}
		else if (userInput == 2)
		{
			Student1.payFees(amount);
		}
	}
	return 0;
};